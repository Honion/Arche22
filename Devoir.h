#ifndef __Devoir_H__
#define __Devoir_H__


#include <ctime>
#include <string>
using namespace std;

class Devoir
{
      public:
             Devoir(std::string titre, std::string enonce, time_t date);
			 ~Devoir();
             void setEnonce(std::string enonce);
             void setTitre(std::string titre);
             std::string getTitre();
             std::string getEnonce();
             time_t getDate();
             void setDate(time_t date);
             
             
             
      protected:
                std::string Titre;
                std::string Enonce;
                time_t DateLimite;
};
#endif   
