

class Cercle
{
protected:
    int m_x;
    int m_y; 
    int m_rayon;
    Couleur m_couleur;
public:
    Cercle(const Cercle&);
    Cercle();
    Cercle(int, int, int, Couleur=Couleur(0,0,255));
    void placer(int, int);
    void dimension(int);
    void definirCouleur(int, int, int);
    void definirCouleur(Couleur);
    int coordX() const;
    int coordY() const;
    int rayon() const;
    Couleur couleur() const;
    void afficher(Fenetre&) const;
    void effacer(Fenetre&) const;
    bool touche(int, int) const;
};