int main() {
  int x = 5;
  int *ptr = &x; 
  *ptr = 10; 
  int y = *ptr; 
  std::cout << x << " " << y << std::endl; //This will print 10 10, not 5 10
}