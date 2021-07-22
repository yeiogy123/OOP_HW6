abstract class Shape {
    private String color;
    Shape(String string){
        System.out.println("constructor in Shape");
        this.color = string;
    }
    public void print(){
        System.out.printf(this.color+" ");
    }
    public abstract double get_area() ;
};