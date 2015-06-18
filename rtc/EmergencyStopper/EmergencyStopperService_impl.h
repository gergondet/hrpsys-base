#ifndef __EMERGENCYSTOPPER_SERVICE_H__
#define __EMERGENCYSTOPPER_SERVICE_H__

#include "EmergencyStopperService.hh"

class EmergencyStopper;

class EmergencyStopperService_impl
    : public virtual POA_OpenHRP::EmergencyStopperService,
      public virtual PortableServer::RefCountServantBase
{
public:
    /**
       \brief constructor
    */
    EmergencyStopperService_impl();

    /**
       \brief destructor
    */
    virtual ~EmergencyStopperService_impl();

    void stopMotion();
    void releaseMotion();

    void emergencystopper(EmergencyStopper *i_emergencystopper);

private:
    EmergencyStopper *m_emergencystopper;
};

#endif