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

int SIZE = 20000001;
int __VERIFIER_nondet_int();
int main() {

  int n =  1000000;
  int a[n];  
  int i = 0;

  int x; 

  while(i < n){
    a[i] = i;
    i++;
  }

  bool found_500 = false;
  i = 0;
  while(i < n){
    if(a[i] == 500){
      found_500 = true;
    }
  }
  
  __VERIFIER_assert(found_500);

}
