extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "vnew2.c", 3, "reach_error"); }
extern void abort(void);
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: {reach_error();abort();}
  }
  return;
}

#define FORALL(Var, Type, Cond)       \
  Type Var;                           \
  __invariant(__forall(Var, Cond));   \

#define EXISTS(Var, Type, Cond)       \
  Type Var;                           \
  __invariant(__exists(Var, Cond));   \

int __VERIFIER_nondet_int();

int abs(int x){
  return x < 0 ? -x : x;
}

int main() {

  //int size = __VERIFIER_nondet_int();
  
  
  int a[100000];
  int b[100000];
  int res[100000];
  
  a[0] = 1;
  b[0] = 2;
    
  int i = 0;

  int x; 
  while (i < 100000)
  {
    res[i] = a[i] + b[i];
    i++;
  }
  
  for(int k = 0; k < 100000; k++){
      __VERIFIER_assert(res[k] == a[k] + b[k]);
  }
}
