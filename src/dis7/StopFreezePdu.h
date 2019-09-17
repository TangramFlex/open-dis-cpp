#ifndef STOPFREEZEPDU_H
#define STOPFREEZEPDU_H

#include <dis7/EntityID.h>
#include <dis7/EntityID.h>
#include <dis7/ClockTime.h>
#include <dis7/SimulationManagementFamilyPdu.h>
#include <utils/DataStream.h>
#include <dis7/msLibMacro.h>


namespace DIS
{
// Section 7.5.5. Stop or freeze an enity (or exercise). COMPLETE

// Copyright (c) 2007-2009, MOVES Institute, Naval Postgraduate School. All rights reserved. 
//
// @author DMcG, jkg

class EXPORT_MACRO StopFreezePdu : public SimulationManagementFamilyPdu
{
protected:
  /** Identifier for originating entity(or simulation) */
  EntityID _originatingID; 

  /** Identifier for the receiving entity(or simulation) */
  EntityID _receivingID; 

  /** real-world(UTC) time at which the entity shall stop or freeze in the exercise */
  ClockTime _realWorldTime; 

  /** Reason the simulation was stopped or frozen (see section 7 of SISO-REF-010) represented by an 8-bit enumeration */
  uint8_t _reason; 

  /** Internal behavior of the entity(or simulation) and its appearance while frozen to the other participants */
  uint8_t _frozenBehavior; 

  /** padding */
  short _padding1; 

  /** Request ID that is unique */
  unsigned int _requestID; 


 public:
    StopFreezePdu();
    virtual ~StopFreezePdu();

    virtual void marshal(DataStream& dataStream) const;
    virtual void unmarshal(DataStream& dataStream);

    EntityID& getOriginatingID(); 
    const EntityID&  getOriginatingID() const; 
    void setOriginatingID(const EntityID    &pX);

    EntityID& getReceivingID(); 
    const EntityID&  getReceivingID() const; 
    void setReceivingID(const EntityID    &pX);

    ClockTime& getRealWorldTime(); 
    const ClockTime&  getRealWorldTime() const; 
    void setRealWorldTime(const ClockTime    &pX);

    uint8_t getReason() const; 
    void setReason(uint8_t pX); 

    uint8_t getFrozenBehavior() const; 
    void setFrozenBehavior(uint8_t pX); 

    short getPadding1() const; 
    void setPadding1(short pX); 

    unsigned int getRequestID() const; 
    void setRequestID(unsigned int pX); 


virtual int getMarshalledSize() const;

     bool operator  ==(const StopFreezePdu& rhs) const;
};
}

#endif
// Copyright (c) 1995-2009 held by the author(s).  All rights reserved.
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
//  are met:
// 
//  * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
// * Redistributions in binary form must reproduce the above copyright
// notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
// * Neither the names of the Naval Postgraduate School (NPS)
//  Modeling Virtual Environments and Simulation (MOVES) Institute
// (http://www.nps.edu and http://www.MovesInstitute.org)
// nor the names of its contributors may be used to endorse or
//  promote products derived from this software without specific
// prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// AS IS AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
// FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
// COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
// BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
// LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
// ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
