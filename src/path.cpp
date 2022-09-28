#include "path.hpp"

namespace vfs {
  
  Path::Path(std::string path) {
		std::string delimiter = "/";
		
    // Set path type
    if (path[path.size()-1] != '/') {
      type = File;  
    }

		// Remove the first slash
		if (path[0] == '/') {
			path.erase(0,1);
		}
		
		size_t pos = 0;
		std::string token;
		while ((pos = path.find(delimiter)) != std::string::npos) {
			token = path.substr(0, pos);
			this->path.push_back(token);
			path.erase(0, pos + 1);
		}
		this->path.push_back(path);
	}
  
  void Path::cd(std::string path) {
		std::string delimiter = "/";
		
    // Set path type
    if (path[path.size()-1] != '/') {
      type = File;  
    }
    
		// Remove the first slash
		// Clear the already existing path because we are starting from root
		if (path[0] == '/') {
			path.erase(0,1);
			this->path.clear();
		}
		
		size_t pos = 0;
		std::string token;
		while ((pos = path.find(delimiter)) != std::string::npos) {
			token = path.substr(0, pos);
			this->path.push_back(token);
			path.erase(0, pos + 1);
		}
		this->path.push_back(path);
	}

std::string Path::to_string() {
  std::string output; 

  for(std::list<std::string>::iterator it = path.begin(); it != path.end(); ++it) {
    output += "/";
    output += *it;
  }
  
  if (type == Folder) {
    output += "/";
  }
  
  return output;
}

}
