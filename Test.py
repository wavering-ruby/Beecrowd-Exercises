import os;

def foldersName():
    name = {
        {
            "Language": "Python",
            "TotProblems": 0,
            "ResolvedProblems": 0
        }
    }
    
    return list(name[0].values())[0];

print(foldersName());