//#ifndef _PLAYER_H_
#define _PLAYER_H_

/**
 *  Class that defines a Player.
 */
class Player
{
    //  PUBLIC FUNCTIONS
    public:

        /**
         *  Constructor.
         */
        Player();
		Player::Player(int posX, int posY);
		Player::Player(const Player& player2);
        /**
         *  Destructor.
         */
        ~Player();

        /**
         *  Method to set the position of the player.
         *  @param  pX  X position of the player.
         *  @param  pY  Y position of the player.
         */
        void setPosition(int pX, int pY);

        /**
         *  Method to get the X coordinate of the player position.
         *  @return X coordinate of the player position.
         */
        int getXPosition()const;

        /**
        *  Method to get the Y coordinate of the player position.
        *  @return Y coordinate of the player position.
        */
        int getYPosition();

        /**
         *  Method to ask whether the player is alive or not.
         *  @return TRUE if the player is alive, FALSE otherwise.
         */
        bool isAlive();

		bool operator==(const Player& player2);//compare the player that we put with player2
        
    //  PRIVATE DATA MEMBERS
    private:

        /**Boolean that stores if the player is alive.*/
        bool    _alive;
        /**X coordinate of the player position.*/
        int     _posX;
        /**Y coordinate of the player position.*/
        int     _posY;

		const int _maxscore; //we have to initialise this variable iside the class but it's a constat so we can't modify the value, and now it dosn't have value
								//to initialise it, we have to do it in the class neme--> (go there)
		char* name;
};


inline bool Player::isAlive()//inline means that we copy the code of the function and put it this file to aoid the jump that makes the compiler when we call a function 
{							 //defined in another file

}

#endif