import os

def getFolderName(folder_path):
    """
        Retorna o nome da pasta a partir do caminho completo.
    """
    return os.path.basename(folder_path)

def getFolderFiles(folder_path, extension = None):
    """
        Retorna uma lista de arquivos na pasta. Se `extension` for especificado, filtra por extensão (ex: '.cpp').
    """
    files = []
    for file in os.listdir(folder_path):
        file_path = os.path.join(folder_path, file)
        if os.path.isfile(file_path):
            if extension:
                if file.endswith(extension):
                    files.append(file)
            else:
                files.append(file)
    return files

def printFolderData(folder_data):
    """
        Essa função imprime os dados da pasta, incluindo o nome e a lista de arquivos.
        Ela é útil para verificar rapidamente o conteúdo de uma pasta sem abrir o explorador de arquivos.
    """
    print("\n📁 Dados da Pasta:")
    print(f"► Nome: {folder_data['folderName']}")
    print("► Arquivos:")
    for i, file in enumerate(folder_data['folderFiles'], 1):
        print(f" [{file}]({folder_path}/{file})")
    print(f"Total de arquivos: {len(folder_data['folderFiles'])}\n")

# 1. Pega o diretório atual do script
script_dir = os.path.dirname(os.path.abspath(__file__))

# 2. Constrói o caminho absoluto
folder_path = os.path.join(script_dir, "..", "C++", "1. Beginner")
folder_path = os.path.normpath(folder_path)  # Remove "../" e normaliza

# 3. Verifica se o caminho existe antes de usar
if not os.path.exists(folder_path):
    raise FileNotFoundError(f"Pasta não encontrada: {folder_path}")

# Obtém os dados da pasta
folder_data = {
    "folderName": getFolderName(folder_path),
    "folderFiles": getFolderFiles(folder_path, ".cpp")
}

# Exibe os dados (usando a função printFolderData do exemplo anterior)
printFolderData(folder_data)