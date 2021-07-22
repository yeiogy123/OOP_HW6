class Circle extends Shape{
    private int radius;
    public Circle(String string, int radius){
        super(string);
        this.radius = radius;
    }
    public void print(){
        super.print();
        System.out.println(" circle, radius "+this.radius+", area "+get_area());
    }
    public double get_area(){
        return this.radius*this.radius*Math.PI;
    }
}
