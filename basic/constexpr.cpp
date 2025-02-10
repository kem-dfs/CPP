/**
 * constexpr: constant expression
 * indicates that the value, or return value is constant and where possible, is computed at compile time.
 * a compiler error is raised when any code attempts to modify the value.
 * usage: whenever a const integer is required, such as in template, arguments, array declarations. value is computed at compile time instead of run time, helps program run faster and use less memory.
 * return: literal type. 
 * 
 */

 /**
  * constexpr variables:
  * diff with const: the initialization of const variable can be deferred until run time.
  * constexpr variable must be initialized at compile time. all constexpr variables are const. 
  * 
  * variable has a literal types and is initialized.
  * a reference may be declared as constexpr when both these conditions are met: 
  * the referenced object is initialized by a constant expression. 
  * any implicit conversions invoked during intialization are also constant expressions. 
  * 
  * have "constexpr" specifier. 
  * 
  */

  /**
   * constexpr functions:
   * 
   * is one whose return value is computable at compile time when consuming code requires it. 
   * when called with non-constexpr arguments, or when its value isn't required at compile time, it produces a value at runtime like a regular function. 
   * constexpr function or constructor is implicitly inline. 
   * 
   * rules:
   * must accept and return only literal types. 
   * can be recursive
   * c++ 20 and later, constexpr function can be virtual 
   * body can be defined as = default or = delete
   * body can contain goto or try block
   * an explicit specilization of a non-constexpr template can be declared as constexpr
   * an explicit specilization of a constexpr template does not have to be constexpr
   * from vs 2017 and later: 
   * may contain if and switch statements, all looping statements including for, range-based for, while and do-while
   * may contain local variable declarations, but the variable must be initialized. it must be a literal type, can't be static or thread-local. the locally declared varialbe isn't rquired to be const, and may mutate. 
   * constexpr non-static member function isn't required to be implicitly const
   * 
   */