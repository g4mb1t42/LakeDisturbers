#include "header.h"


void Load()
{
    
}
void Update(RenderWindow &window)
{
    Event event;
      while (window.pollEvent(event)){
      if (event.type == Event::Closed){
        window.close();
        return;
      }
      }
      if (Keyboard :: isKeyPressed(Keyboard::Escape))
        {
            window.close();
        }
}
void Render(RenderWindow &window)
{

}


int main()
{
  RenderWindow window(VideoMode(800,600),"Lake Disturbers");
  Load();
  while(window.isOpen())
  {
      window.clear();
      Update(window);
      Render(window);
      window.display();
  }

  
  
}