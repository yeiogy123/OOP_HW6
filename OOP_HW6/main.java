import java.util.*;
public class main{
    public static void main(String[] args){
        Vector<Shape> s = new Vector<>();
        s.add(new Triangle("green",8,4));
        s.add(new Triangle("Red",4,10));
        s.add(new Circle("yellow",5));
        s.add(new Circle("blue",10));
        s.add(new Rectangle("black",8,6));
        s.add(new Rectangle("pink",3,7));
        s.add(new Circle("purple",43));
        s.add(new Triangle("indigo",53,97));
        s.add(new Rectangle("orange",103,886));
        s.add(new Circle("white",87));
        s.add(new Circle("brown",69));
        System.out.println("Printing all shapes...\n");
        for(int i=0;i<s.size();i++){
            s.get(i).print();
        }
        System.out.println("Printing only circles...\n");
        Circle circle = new Circle("circle",5);
        for(int i=0;i<s.size();i++){
            if(s.get(i).getClass().getName().equals(circle.getClass().getName())){
                s.get(i).print();
            }
        }
        System.out.println("Destructing every Objects...\n");
        s.clear();

    }
}
