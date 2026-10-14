
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CDeadReckonedVector::NormalizeProjectedPosition(void) */

void __thiscall CDeadReckonedVector::NormalizeProjectedPosition(CDeadReckonedVector *this)

{
  float fVar1;
  
                    /* 0x13f8d0  48  ?NormalizeProjectedPosition@CDeadReckonedVector@@QAEXXZ */
  fVar1 = SQRT(*(float *)(this + 0x68) * *(float *)(this + 0x68) +
               *(float *)(this + 100) * *(float *)(this + 100) +
               *(float *)(this + 0x60) * *(float *)(this + 0x60));
  if (_DAT_005d7e84 < fVar1) {
    fVar1 = (float)_DAT_005c89b8 / fVar1;
    *(float *)(this + 0x60) = fVar1 * *(float *)(this + 0x60);
    *(float *)(this + 100) = fVar1 * *(float *)(this + 100);
    *(float *)(this + 0x68) = fVar1 * *(float *)(this + 0x68);
    return;
  }
  return;
}

