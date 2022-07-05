class Game
{
    public :
    Game();
    void insert(int , char);
    void print() const;
    bool is_empty(int) const;
    bool is_victory() const;

    void computer_play(char);
   
   
    private :
    char *pntr;
};