// Test that a virtual defaulted constructor is still virtual.
// { dg-do run }
// { dg-options -std=c++0x }

int r = 1;

struct A
{
  virtual ~A() = default;
};

struct B: A
{
  ~B() noexcept { r = 0; }
};

A* ap = new B();

int main()
{
  delete ap;
  return r;
}
