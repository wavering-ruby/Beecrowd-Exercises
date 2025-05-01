"""
    Esse arquivo serve para definir as funções que serão utilizadas no frontend do projeto.
    Ele contém funções para criação de labels para exibição de dados, como quantidade de arquivos etc.
    Onde irá gerar labels para exibir os dados de forma organizada e legível, e que serão utilizadas
    para sobrescrever os labels já existentes dentro do README.md do repositório.
"""

def label_perc(perc_folder, extension):
    """
        Essa função gera um label para exibir a porcentagem de arquivos em relação ao total de arquivos.
        Ela é útil para mostrar o progresso ou a porcentagem de conclusão de uma tarefa.
    """
    perc_folder = "{:.2f}".format(perc_folder)

    # if extension.startswith("."):
    #     extension = extension[1:]
    extensionName = extension
    
    if(extension == "cpp"):
        extensionName = "C++"
        extension = "cplusplus"
    
    # Colocando as corzinhas bases;
    language_background = {
        "C++": "00599C",
        "C": "283593",
        "Python": "3776AB",
        "Java": "336791",
        "Kotlin": "7F52FF",
        "Lua": "000080"
    }
    
    color = language_background[extensionName]
    
    # Gera o label com a porcentagem e a extensão
    return f"![{extension}](https://img.shields.io/badge/{extensionName}-{perc_folder}%25-{color}?style=flat-square&logo={extension}&logoColor=white&labelColor={color})"