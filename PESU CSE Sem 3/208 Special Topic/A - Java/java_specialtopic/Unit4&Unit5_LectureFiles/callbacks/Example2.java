//Example of callback for your reference

interface ClickEventHandler {
   public void handleClick();
}

//Create a callback handler
//implementing the above interface
class ClickHandler implements ClickEventHandler {
   public void handleClick() {
      System.out.println("Clicked");
   }
}

//Create event generator class
class Button {
   public void onClick(ClickEventHandler clickHandler) {
      clickHandler.handleClick();
   }
}

public class Example2 {
   public static void main(String[] args) {
      Button button = new Button();
      ClickHandler clickHandler = new ClickHandler();
      //pass the clickHandler to do the default operation
      button.onClick(clickHandler);

      /*Button button1 = new Button();
      //pass the interface to implement own operation
      button1.onClick(new ClickEventHandler() {
         @Override
         public void handleClick() {
            System.out.println("Button Clicked");
         }
      });*/
   }
}