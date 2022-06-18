/**
 * @author Fernando Ismael Canul Caballero
 * 
 */

class Punto{
  //Atributos
  private: 
    int x, y;

  public:
    //Constructores
    Punto(int a, int b){
      x = a;
      y = b;
    }

    Punto(){
      x = 0;
      y = 0;
    }

    //Métodos setters y getters
    void setX(int valorX);
    void setY(int valorY);
    int getX();
    int getY();

};