class Cube {
   private:
    int height, width, depth;

   public:
    Cube(int, int, int);
    int volume();
};

Cube::Cube(int height, int width, int depth) {
    this->height = height;
    this->width = width;
    this->depth = depth;
}

int Cube::volume() { return height * width * depth; }