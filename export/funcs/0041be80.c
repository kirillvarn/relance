
/* public: void __thiscall CGunWrapper::DispatchQueue(void) */

void __thiscall CGunWrapper::DispatchQueue(CGunWrapper *this)

{
  int *piVar1;
  
                    /* 0x1be80  37  ?DispatchQueue@CGunWrapper@@QAEXXZ */
  piVar1 = *(int **)(this + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1,this);
  }
  return;
}

