#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		std::ifstream	inFile;
		std::ofstream	outFile;
		std::string		str;
		std::string		newFileReplaceName = argv[1];
		std::string		strToFind = argv[2];	//peut etre check si std::string
		std::string		strNew = argv[3];		//peut etre check si std::string
		std::size_t		pos;
		std::size_t		strToFindSize;
		std::size_t		strNewSize;

		newFileReplaceName.append(".replace");
		inFile.open(argv[1]);
		strToFindSize = strToFind.length();
		strNewSize = strNew.length();
		if (inFile && outFile)
		{
			outFile.open(newFileReplaceName);
			std::cout << argv[1] << " [opened]" << std::endl;		//debug
			std::cout << newFileReplaceName << " [created]" << std::endl;		//debug
			while (std::getline(inFile, str))
			{
				if ((pos = str.find(strToFind)) == std::string::npos)						//si je trouve pas d'occurence je peux direct copier la ligne
					outFile << str << std::endl;
				else
				{
					while ((pos = str.find(strToFind)) != std::string::npos)
					{
						str.erase(pos, strToFindSize);
						str.insert(pos, strNew);
						pos += strNewSize;
					}
					outFile << str << std::endl;
				}
			}
			inFile.close();
			outFile.close();
			std::cout << argv[1] << " [closed]" << std::endl;		//debug
			std::cout << newFileReplaceName << " [closed]" << std::endl;		//debug
			return (0);
		}
		std::cout << "Error : failed to open file" << std::endl;
		return (1);
	}
	std::cout << "Error : program needs 3 parameters : file / string_to_replace / new_string" << std::endl;
	return (1);
}

//regarder du cote de std::string.insert

//on va parcourir ligne par ligne le fichier avec getline
	//si on ne toruve aucune occurence --> on copie la ligne dans le nouveau fichier
	//si on trouve une occurence on la remplace par strNew puis on copie la ligne dans le fichier