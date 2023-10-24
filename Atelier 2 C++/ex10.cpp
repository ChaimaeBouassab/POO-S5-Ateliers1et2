#include <iostream>
#include <string>
#include <ctime>

class Personne {
private:
    std::string nom;
    std::string prenom;
    time_t datenaissance;

public:
    Personne(const std::string& n, const std::string& p, time_t dn) : nom(n), prenom(p), datenaissance(dn) {}

    void Afficher() {
        std::cout << "Nom: " << nom << " Prénom: " << prenom << " Date de naissance: " << asctime(localtime(&datenaissance));
    }
};

class Employe : public Personne {
private:
    double salaire;

public:
    Employe(const std::string& n, const std::string& p, time_t dn, double s) : Personne(n, p, dn), salaire(s) {}

    void Afficher() {
        Personne::Afficher();
        std::cout << "Salaire: " << salaire << std::endl;
    }
};

class Chef : public Employe {
private:
    std::string service;

public:
    Chef(const std::string& n, const std::string& p, time_t dn, double s, const std::string& ser) : Employe(n, p, dn, s), service(ser) {}

    void Afficher() {
        Employe::Afficher();
        std::cout << "Service: " << service << std::endl;
    }
};

class Directeur : public Chef {
private:
    std::string societe;

public:
    Directeur(const std::string& n, const std::string& p, time_t dn, double s, const std::string& ser, const std::string& soc) : Chef(n, p, dn, s, ser), societe(soc) {}

    void Afficher() {
        Chef::Afficher();
        std::cout << "Société: " << societe << std::endl;
    }
};

int main() {
    time_t dateDeNaissance;
    struct tm timeinfo = {};
    timeinfo.tm_year = 90; // Année (exemple : 1990 - 1900)
    timeinfo.tm_mon = 0;  // Mois (0 = janvier)
    timeinfo.tm_mday = 1; // Jour du mois
    dateDeNaissance = mktime(&timeinfo);

    Directeur directeur("John", "Doe", dateDeNaissance, 100000, "IT", "MyCompany");

    directeur.Afficher();

    return 0;
}
