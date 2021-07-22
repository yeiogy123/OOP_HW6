class Rectangle extends Shape{
    private int height;
    private int width;
    public Rectangle(String string, int height, int width){
        super(string);
        this.height = height;
        this.width = width;
    }
    public void print(){
        super.print();
        System.out.println(" Rectangle, height "+this.height+", width "+this.width+", area "+get_area());
    }
    public double get_area(){
        return this.height*this.width;
    }
}