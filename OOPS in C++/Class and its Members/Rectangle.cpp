class Rectangle {
    private:
        double length;
        double width;

    public:
        void setLength(double len) {
            length = len;
        }

        void setWidth(double wid) {
            width = wid;
        }

        double getArea() {
            return length * width;
        }
        int getLength(){
          return length;
        }
        int getWidth(){
          return width;
        }
};
