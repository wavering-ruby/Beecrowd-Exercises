import os

def get_folder_name(folder_path):
    """
        Retorna o nome da pasta a partir do caminho completo.
    """
    return os.path.basename(folder_path)

def get_folder_files(folder_path, extension = None):
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

def get_folder_structure(base_path, script_dir, extensions=None):
    """
        Essa função retorna a estrutura de pastas e arquivos de um diretório base especificado com a extensão do arquivo que foi passado.
        Ela é útil para organizar e visualizar rapidamente o conteúdo de um diretório sem precisar abrir cada pasta manualmente.
    """
    folders = ["1. Beginner", "2. Ad-Hoc", "4. Structures and Librarys"]  # Você pode listar pastas dinamicamente com os.listdir()
    folder_data = []
    
    for folder in folders:
        folder_path = os.path.join(base_path, folder)
        folder_data.append({
            "folderName": folder,
            "folderFiles": get_folder_files(folder_path, extensions[0])  # Assumindo que getFolderFiles existe
        })
    
    return folder_data

def get_folder_structure(base_path, script_dir, extensions=None):
    """
    Retorna a estrutura de pastas e arquivos de um diretório base.
    
    Args:
        base_path (str): Caminho base das pastas (ex: "C++").
        script_dir (str): Diretório do script (para referência).
        extensions (list, optional): Lista de extensões de arquivo (ex: [".cpp"]). Padrão: None.
    
    Returns:
        list: Lista de dicionários no formato {"folderName": str, "folderFiles": list}.
    """
    if extensions is None:
        extensions = [".cpp"]  # Valor padrão se não for especificado

    # Nessa variável, deve-se ter todos os nomes das pastas da maneira CORRETA que estão no diretório
    # Se qualquer coisa estiver errada, ele retornará erro do sistema não encontrar o caminho especificado!
    folders = ["1. Beginner", "2. Ad-Hoc", "4. Structures and Librarys", "5. Mathematics"]
    folder_data = []
    
    for folder in folders:
        folder_path = os.path.join(base_path, folder)
        folder_data.append({
            "folderName": folder,
            "folderFiles": get_folder_files(folder_path, extensions[0])  # Assume que get_folder_files existe
        })
    
    return folder_data

def print_folder_data(folder_data_list, base_path = ""):
    """
    Imprime a estrutura de pastas e arquivos formatada.
    
    Args:
        folder_data_list (list): Lista de dicionários.
        base_path (str, optional): Caminho base para links clicáveis.
    """
    print("\n📂 Estrutura de Pastas:")
    
    for folder_data in folder_data_list:
        print(f"\n📁 Pasta: {folder_data['folderName']}")
        print("📄 Arquivos:")
        
        if not folder_data['folderFiles']:
            print("  (Nenhum arquivo encontrado)")
        else:
            for i, file in enumerate(folder_data['folderFiles'], 1):  # Corrigido: 'folderFiles'
                if base_path:
                    full_path = f"{base_path}/{folder_data['folderName']}/{file}"  # Corrigido: 'folderName'
                    print(f"  {i}. [{file}]({full_path})")
                else:
                    print(f"  {i}. {file}")
        
        print(f"Total de arquivos: {len(folder_data['folderFiles'])}")
    print("\n✅ Fim da listagem.\n")

def calculating_percentage(b_exercises, folder_data_list):
    """
    Calcula a porcentagem de arquivos em relação ao total de exercícios por categoria.
    
    Args:
        b_exercises (dict): Dicionário com o total de exercícios por pasta.
                           Ex: {"1. Beginner": 10, "2. Ad-Hoc": 15}
        folder_data_list (list): Lista de dicionários com os arquivos de cada pasta.
                                Ex: [{"folderName": "1. Beginner", "folderFiles": ["ex1.cpp", "ex2.cpp"]}, ...]
    
    Returns:
        list: Lista de dicionários com o nome da pasta e a porcentagem concluída.
              Ex: [{"folderName": "1. Beginner", "percentage": 20.0}, ...]
    """
    folder_percentages = []
    
    for folder_data in folder_data_list:
        folder_name = folder_data['folderName']
        folder_files = folder_data['folderFiles']
        total_files = len(folder_files)
        
        # Verifica se a pasta está no dicionário de exercícios
        if folder_name in b_exercises:
            total_exercises = b_exercises[folder_name]
            
            # Calcula a porcentagem (com tratamento para divisão por zero)
            percentage = (total_files / total_exercises * 100) if total_exercises > 0 else 0.0
            
            folder_percentages.append({
                "folderName": folder_name,
                "percentage": percentage,
                "completed": total_files,
                "total": total_exercises,
                "extension": folder_files[0].split('.')[-1] if folder_files else None
            })
            
            print(f"📁 {folder_name}: {total_files}/{total_exercises} exercícios → {percentage:.2f}% concluído")
        else:
            print(f"⚠️ {folder_name}: Pasta não encontrada no dicionário de exercícios.")
            folder_percentages.append({
                "folderName": folder_name,
                "percentage": 0.0,
                "completed": total_files,
                "total": 0,
                "extenson": None
            })
    
    return folder_percentages