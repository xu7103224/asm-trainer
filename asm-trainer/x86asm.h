#pragma once

class X86Assembler : public Assembler
{
public:
    virtual bool Initialize() override;
    virtual bool Assemble(std::string& assembly, std::vector<uint8_t>& encoded) override;
};