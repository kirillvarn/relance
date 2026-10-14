
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CDeadReckonedVector::NormalizeTrackedPosition(void) */

void __thiscall CDeadReckonedVector::NormalizeTrackedPosition(CDeadReckonedVector *this)

{
  float fVar1;
  
                    /* 0x13f920  49  ?NormalizeTrackedPosition@CDeadReckonedVector@@QAEXXZ */
  fVar1 = SQRT(*(float *)(this + 0x74) * *(float *)(this + 0x74) +
               *(float *)(this + 0x70) * *(float *)(this + 0x70) +
               *(float *)(this + 0x6c) * *(float *)(this + 0x6c));
  if (_DAT_005d7e84 < fVar1) {
    fVar1 = (float)_DAT_005c89b8 / fVar1;
    *(float *)(this + 0x6c) = fVar1 * *(float *)(this + 0x6c);
    *(float *)(this + 0x70) = fVar1 * *(float *)(this + 0x70);
    *(float *)(this + 0x74) = fVar1 * *(float *)(this + 0x74);
    return;
  }
  return;
}

