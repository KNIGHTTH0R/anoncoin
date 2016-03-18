#ifndef __I2P_MANAGER__
#define __I2P_MANAGER__

#include <boost/filesystem.hpp>
#include <boost/filesystem/fstream.hpp>
#include <string>
#include "stdint.h"
#include "i2pdata.h"

class I2PManager
{
public:
    I2PManager();
    ~I2PManager();

    boost::filesystem::path GetI2PSettingsFilePath(void) const;
    bool WriteToI2PSettingsFile(void);
    bool ReadI2PSettingsFile(void);
    const I2P_Data_File_t* getFileI2PPtr(void) const;
    void LogDataFile(void);
    void UpdateMapArguments(void);

private:
    I2PDataFile FileI2P;

};


#endif // __I2P_MANAGER__
