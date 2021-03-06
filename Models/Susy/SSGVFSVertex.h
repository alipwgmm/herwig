// -*- C++ -*-
//
// SSGVFSVertex.h is a part of Herwig - A multi-purpose Monte Carlo event generator
// Copyright (C) 2002-2017 The Herwig Collaboration
//
// Herwig is licenced under version 3 of the GPL, see COPYING for details.
// Please respect the MCnet academic guidelines, see GUIDELINES for details.
//
#ifndef HERWIG_SSGVFSVertex_H
#define HERWIG_SSGVFSVertex_H
//
// This is the declaration of the SSGVFSVertex class.
//

#include "ThePEG/Helicity/Vertex/Scalar/RFSVertex.h"
#include "ThePEG/StandardModel/StandardModelBase.h"
#include "MSSM.h"

namespace Herwig {
using namespace ThePEG;

/**
 * This is the implementation of the coupling of the gravitino to 
 * fermion-sfermions. It inherits from RFSVertex and implements the 
 * virtual setCoupling() method.
 * 
 * @see RFSVertex
 */
class SSGVFSVertex: public RFSVertex {

public:

   /**
   * The default constructor.
   */
  SSGVFSVertex();

 public:

  /** @name Functions used by the persistent I/O system. */
  //@{
  /**
   * Function used to write out object persistently.
   * @param os the persistent output stream written to.
   */
  void persistentOutput(PersistentOStream & os) const;

  /**
   * Function used to read in object persistently.
   * @param is the persistent input stream read from.
   * @param version the version number of the object when written.
   */
  void persistentInput(PersistentIStream & is, int version);
  //@}

  /**
   * The standard Init function used to initialize the interfaces.
   * Called exactly once for each class by the class description system
   * before the main function starts or
   * when this class is dynamically loaded.
   */
  static void Init();

  /**
   * Calculate the couplings.
   * @param q2 The scale \f$q^2\f$ for the coupling at the vertex.
   * @param part1 The ParticleData pointer for the first  particle.
   * @param part2 The ParticleData pointer for the second particle.
   * @param part3 The ParticleData pointer for the third  particle.
   */
  virtual void setCoupling(Energy2 q2, tcPDPtr part1,
                           tcPDPtr part2, tcPDPtr part3);

protected:

  /** @name Clone Methods. */
  //@{
  /**
   * Make a simple clone of this object.
   * @return a pointer to the new object.
   */
  virtual IBPtr clone() const {return new_ptr(*this);}

  /** Make a clone of this object, possibly modifying the cloned object
   * to make it sane.
   * @return a pointer to the new object.
   */
  virtual IBPtr fullclone() const {return new_ptr(*this);}
  //@}

protected:

  /** @name Standard Interfaced functions. */
  //@{
  /**
   * Initialize this object after the setup phase before saving and
   * EventGenerator to disk.
   * @throws InitException if object could not be initialized properly.
   */
  virtual void doinit();
  //@}

private:

  /**
   * The assignment operator is private and must never be called.
   * In fact, it should not even be implemented.
   */
  SSGVFSVertex & operator=(const SSGVFSVertex &);

  /**
   * Pointer to the stop mixing matrix
   */
  tMixingMatrixPtr stop_;

  /**
   * Pointer to the sbottom mixing matrix
   */
  tMixingMatrixPtr sbot_;

  /**
   * Pointer to the stau mixing matrix
   */
  tMixingMatrixPtr stau_;

  /**
   *  The Planck mass
   */
  Energy MPlanck_;
};
}

#endif /* HERWIG_SSGVFSVertex_H */
