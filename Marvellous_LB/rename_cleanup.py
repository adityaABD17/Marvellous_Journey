import os
import re
import hashlib

def extract_function_name(file_content):
    """
    Extracts the first function name from the C/C++ file content.
    Assumes function declarations are in the format: 'return_type function_name(...)'
    """
    function_pattern = re.compile(r'^\s*[a-zA-Z_][a-zA-Z0-9_]*\s+([a-zA-Z_][a-zA-Z0-9_]*)\s*\(', re.MULTILINE)
    match = function_pattern.search(file_content)
    return match.group(1) if match else None

def generate_unique_identifier(file_content):

    """
    Generates a unique identifier based on the file content using SHA-1 hashing.
    """
    sha1_hash = hashlib.sha1()
    sha1_hash.update(file_content.encode('utf-8'))
    return sha1_hash.hexdigest()[:8]  # Use first 8 characters of the hash for uniqueness

def delete_exe_files(root_dir):
    """
    Deletes all .exe files in the directory and its subdirectories.
    """
    for dirpath, _, filenames in os.walk(root_dir):
        for filename in filenames:
            if filename.endswith('.exe'):
                file_path = os.path.join(dirpath, filename)
                os.remove(file_path)
                print(f"Deleted '{file_path}'")

def rename_files_in_directory(DirName):

    print("We are going to Scan the Directory : ",DirName)

    flag = os.path.isabs(DirName)

    if flag == False:
        DirName = os.path.abspath(DirName)
        print(DirName)

    exist = os.path.isdir(DirName)
    print(exist)

    if exist:
        for dirpath, _, filenames in os.walk(DirName):
            for filename in filenames:
                if filename.endswith('.c') or filename.endswith('.cpp'):
                    file_path = os.path.join(dirpath, filename)
                    print(file_path)
                        
                        # Read the file content
                    with open(file_path, 'r', encoding='utf-8', errors='ignore') as file:
                        content = file.read()
                        
                        # Extract the function name
                    function_name = extract_function_name(content)
                        
                    if function_name:
                            # Generate a unique identifier for the file content
                        unique_id = generate_unique_identifier(content)
                            
                            # Create a new file name based on the function name and unique identifier
                        file_extension = '.c' if filename.endswith('.c') else '.cpp'
                        new_filename = f"{function_name}_{unique_id}{file_extension}"
                        new_file_path = os.path.join(dirpath, new_filename)

                        flag=os.path.exists(new_file_path)

                        if(not flag):
                            os.rename(file_path, new_file_path)
                            print(f"Renamed '{file_path}' to '{new_file_path}'")
                        else:
                            print(f"Failed to rename {file_path}....{new_file_path} may exist")
                                

                    else:
                            print(f"No function found in '{file_path}', skipping rename.")
                else:
                    print("Invalid path")



    """
    Traverse directories starting from root_dir and rename .c and .cpp files based on function names.
    """
    

print("Hello")
# Specify the root directory containing the files
root_directory = 'Marvellous_LB'

# First, delete all .exe files
delete_exe_files(root_directory)

# Then, rename .c and .cpp files
rename_files_in_directory(root_directory)
