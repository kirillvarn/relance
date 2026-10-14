
/* public: __thiscall CGunWrapper::CGunWrapper(class CGunWrapper const &) */

void __thiscall CGunWrapper::CGunWrapper(CGunWrapper *this,CGunWrapper *param_1)

{
                    /* 0x1be90  7  ??0CGunWrapper@@QAE@ABV0@@Z */
  *(undefined ***)this = &PTR_LAB_005c9348;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  this[8] = param_1[8];
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined ***)this = &_vftable_;
  return;
}

