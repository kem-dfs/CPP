/**
 * literal types:
 * is one whose layout can be determined at compile time
 * 
 * void
 * scalar types
 * references
 * arrays of void, scalar types or references
 * a class that has a trivial destructor, and one of more constexpr constructors that are not moved or copy constructors. additionally, all its non-static data members and base classes must be literal types and not volatile. 
 * 
 */

 /**
  * standard layout types: 
  * when a struct or class does not contain certain c++ language features such as virtual functions which are not found in the C language, and all members have the same access control, it is a standard layout type. 
  * it is memcopy-able and the layout is sufficiently defined that it can be consumed by C programs. 
  * can have user defined special member function
  * 
  * additional: 
  * no virtual functions or virtual base classes
  * all non-static data members have the same access control
  * all non-static members of class type are standard layout
  * any base classes are standard layout
  * has no base classes of the same type as the first non-static data member
  * meets one of those conditions: 
  * - no non-static data memeber in the most-derived class and no more than one base class with non-static data members
  * - or has no base classes with non-static data members
  */


  //ex:
  struct SL
{
   // All members have same access:
   int i;
   int j;
   SL(int a, int b) : i(a), j(b) {} // User-defined constructor OK
};

struct Base
{
   void Foo() {}
};

// std::is_standard_layout<Derived> == true
struct Derived : public Base
{
   int x;
   int y;
};

//if struct Base has any static data like int i, ... it is not standard layout

/**
 * pod types: 
 * when a class/struct is both trivial and standard layout
 * memory layout is contigous and each member has a higher address
 * byte for byte copies and binary i/o can be performed
 * scalar type such as int are also pod types
 * classes only pod types as non-static data members
 */

 /**
  * trivial types: 
  * 
  */