
/* public: struct IGunConnection * __thiscall CGunWrapper::GetConnection(void) */

IGunConnection * __thiscall CGunWrapper::GetConnection(CGunWrapper *this)

{
                    /* 0x148a0  40  ?GetConnection@CGunWrapper@@QAEPAUIGunConnection@@XZ */
  return *(IGunConnection **)(this + 0xc);
}

