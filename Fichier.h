#ifndef __Fichier_H__
#define __Fichier_H__
#include <string>

using namespace std;


class Fichier{
      public:
             Fichier(std::string titre, std::string corps);
			 ~Fichier();
             void setCorps(std::string corps);
             void setTitre(std::string titre);
             std::string getTitre();
             std::string getCorps();
      
      protected:
              std::string Titre;
              std::string Corps;
              
};

#endif
