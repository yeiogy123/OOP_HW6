class Triangle extends Shape{
        private int height;
        private int base;
    public Triangle(String string, int height, int base){
        super(string);
        this.height = height;
        this.base = base;
    }
    public void print(){
        super.print();
        System.out.println(" Triangle, height "+this.height+", base "+this.base+", area "+get_area());
    }
    public double get_area(){
        return 0.5*this.height*this.base;
    }
}
