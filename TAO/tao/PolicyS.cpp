// $Id$

/* -*- C++ -*- */

// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO ORB and the TAO IDL Compiler have been developed by Washington
// University Computer Science's Distributed Object Computing Group.
//
// Information on TAO is available at
//                 http://www.cs.wustl.edu/~schmidt/TAO.html

#include "PolicyS.h"

#if !defined (__ACE_INLINE__)
#include "PolicyS.i"
#endif /* !defined INLINE */

static const TAO_operation_db_entry CORBA_Policy_operations [] = {
  {"_get_policy_type", &POA_CORBA::Policy::_get_policy_type_skel},
  {"copy", &POA_CORBA::Policy::copy_skel},
  {"destroy", &POA_CORBA::Policy::destroy_skel},
  {"_is_a", &POA_CORBA::Policy::_is_a_skel}
};

static const CORBA::Long _tao_CORBA_Policy_optable_size = sizeof (ACE_Hash_Map_Entry<const char *, TAO_Skeleton>) * (12);
static char _tao_CORBA_Policy_optable_pool [_tao_CORBA_Policy_optable_size];
static ACE_Static_Allocator_Base _tao_CORBA_Policy_allocator (_tao_CORBA_Policy_optable_pool, _tao_CORBA_Policy_optable_size);
TAO_Dynamic_Hash_OpTable tao_CORBA_Policy_optable (CORBA_Policy_operations, 4, 8, &_tao_CORBA_Policy_allocator);
// skeleton constructor
POA_CORBA::Policy::Policy (void)
{
  this->optable_ = &tao_CORBA_Policy_optable;
}

// skeleton destructor
POA_CORBA::Policy::~Policy (void)
{
}
static const TAO_Param_Data_Skel _get_CORBA_Policy_policy_type_paramdata [] =
{
  {CORBA::_tc_PolicyType, 0, 0}
}; // CORBA_Policy_policy_type_paramdata

static const TAO_Call_Data_Skel _get_CORBA_Policy_policy_type_calldata =
{"_get_policy_type", 1, 1, _get_CORBA_Policy_policy_type_paramdata};

void POA_CORBA::Policy::_get_policy_type_skel (
    CORBA::ServerRequest &_tao_server_request,
    void *_tao_object_reference,
    void * /* context */,
    CORBA::Environment &_tao_environment
)
{
  POA_CORBA::Policy *_tao_impl = (POA_CORBA::Policy *)_tao_object_reference;
  CORBA::PolicyType _tao_retval = 0;
  _tao_server_request.demarshal (
    _tao_environment,
    &_get_CORBA_Policy_policy_type_calldata,
    &_tao_retval
  );
  if (_tao_environment.exception ()) return;
  _tao_retval = _tao_impl->policy_type (
    _tao_environment
  );
  _tao_server_request.marshal (
    _tao_environment,
    &_get_CORBA_Policy_policy_type_calldata,
    &_tao_retval
  );
}

static const TAO_Param_Data_Skel CORBA_Policy_copy_paramdata [] =
{
  {CORBA::_tc_Policy, 0, 0}
}; // CORBA_Policy_copy_paramdata

static const TAO_Call_Data_Skel CORBA_Policy_copy_calldata =
{"copy", 1, 1, CORBA_Policy_copy_paramdata};

void POA_CORBA::Policy::copy_skel (
    CORBA::ServerRequest &_tao_server_request,
    void *_tao_object_reference,
    void * /* context */,
    CORBA::Environment &_tao_environment
)
{
  POA_CORBA::Policy *_tao_impl = (POA_CORBA::Policy *)_tao_object_reference;
  CORBA::Object_ptr _tao_retval = CORBA::Object::_nil ();
  _tao_server_request.demarshal (
    _tao_environment,
    &CORBA_Policy_copy_calldata,
    &_tao_retval
  );
  if (_tao_environment.exception ()) return;
  _tao_retval = _tao_impl->copy (
    _tao_environment
  );
  _tao_server_request.marshal (
    _tao_environment,
    &CORBA_Policy_copy_calldata,
    &_tao_retval
  );
}

static const TAO_Param_Data_Skel CORBA_Policy_destroy_paramdata [] =
{
  {CORBA::_tc_void, 0, 0}
}; // CORBA_Policy_destroy_paramdata

static const TAO_Call_Data_Skel CORBA_Policy_destroy_calldata =
{"destroy", 1, 1, CORBA_Policy_destroy_paramdata};

void POA_CORBA::Policy::destroy_skel (
    CORBA::ServerRequest &_tao_server_request,
    void *_tao_object_reference,
    void * /* context */,
    CORBA::Environment &_tao_environment
)
{
  POA_CORBA::Policy *_tao_impl = (POA_CORBA::Policy *)_tao_object_reference;
  _tao_server_request.demarshal (
    _tao_environment,
    &CORBA_Policy_destroy_calldata,
    0
  );
  if (_tao_environment.exception ()) return;
  _tao_impl->destroy (
    _tao_environment
  );
  _tao_server_request.marshal (
    _tao_environment,
    &CORBA_Policy_destroy_calldata,
    0
  );
}

static const TAO_Param_Data_Skel CORBA_Policy_is_a_paramdata [] =
{
  {CORBA::_tc_boolean, 0, 0},
  {CORBA::_tc_string, CORBA::ARG_IN, 0}
};
static const TAO_Call_Data_Skel CORBA_Policy_is_a_calldata =
{"_is_a", 1, 2, CORBA_Policy_is_a_paramdata};
void POA_CORBA::Policy::_is_a_skel (
    CORBA::ServerRequest &_tao_server_request,
    void * _tao_object_reference,
    void * /*context*/,
    CORBA::Environment &_tao_environment
  )
{
  POA_CORBA::Policy_ptr  _tao_impl = (POA_CORBA::Policy_ptr) _tao_object_reference;
  CORBA::Boolean _tao_retval;
  char *_tao_value = 0;
  _tao_server_request.demarshal (
    _tao_environment,
    &CORBA_Policy_is_a_calldata,
    &_tao_retval,
    &_tao_value
  );
  if (_tao_environment.exception () != 0) return;
  _tao_retval = _tao_impl->_is_a (_tao_value, _tao_environment);
  _tao_server_request.marshal (
    _tao_environment,
    &CORBA_Policy_is_a_calldata,
    &_tao_retval,
    &_tao_value
  );
  CORBA::string_free (_tao_value);
}

CORBA::Boolean POA_CORBA::Policy::_is_a (
    const char* value,
    CORBA::Environment &_tao_environment
  )
{
  if (
    (!ACE_OS::strcmp ((char *)value, "IDL:CORBA/Policy:1.0")) ||
    (!ACE_OS::strcmp ((char *)value, CORBA::_tc_Object->id (_tao_environment))))
      return CORBA::B_TRUE;
    else
      return CORBA::B_FALSE;
}

void* POA_CORBA::Policy::_downcast (
    const char* logical_type_id
  )
{
  if (ACE_OS::strcmp (logical_type_id, "IDL:CORBA/Policy:1.0") == 0)
    return ACE_static_cast (POA_CORBA::Policy_ptr, this);
  if (ACE_OS::strcmp (logical_type_id, "IDL:omg.org/CORBA/Object:1.0") == 0)
    return ACE_static_cast(PortableServer::Servant, this);
  return 0;
}

void POA_CORBA::Policy::_dispatch (CORBA::ServerRequest &req, void *context, CORBA::Environment &env)
{
  TAO_Skeleton skel; // pointer to skeleton for operation
  const char *opname = req.operation (); // retrieve operation name
  // find the skeleton corresponding to this opname
  if (this->_find (opname, skel) == -1)
  {
    env.exception (new CORBA_BAD_OPERATION (CORBA::COMPLETED_NO));
    ACE_ERROR ((LM_ERROR, "Bad operation <%s>\n", opname));
  }
else
    skel (req, this, context, env);
}

const char* POA_CORBA::Policy::_interface_repository_id (void) const
{
  return "IDL:CORBA/Policy:1.0";
}

POA_CORBA::_tao_collocated_Policy::_tao_collocated_Policy (
    POA_CORBA::Policy_ptr  servant,
    STUB_Object *stub
  )
  : CORBA::Policy (stub, servant, CORBA::B_TRUE),
    CORBA_Object (stub, servant, CORBA::B_TRUE),
    servant_ (servant)
{
}

POA_CORBA::Policy_ptr POA_CORBA::_tao_collocated_Policy::_get_servant (void) const
{
  return this->servant_;
}

CORBA::Boolean POA_CORBA::_tao_collocated_Policy::_is_a (
    const char* logical_type_id,
    CORBA::Environment &_tao_environment
  )
{
  return this->servant_->_is_a (
      logical_type_id,
      _tao_environment
    );
}

CORBA::PolicyType POA_CORBA::_tao_collocated_Policy::policy_type  (
    CORBA::Environment &_tao_environment
   )
{
  return this->servant_->policy_type (
    _tao_environment
  );
}

CORBA::Policy_ptr POA_CORBA::_tao_collocated_Policy::copy  (
    CORBA::Environment &_tao_environment
   )
{
  return this->servant_->copy (
    _tao_environment
  );
}

void POA_CORBA::_tao_collocated_Policy::destroy  (
    CORBA::Environment &_tao_environment
   )
{
  this->servant_->destroy (
    _tao_environment
  );
}


CORBA::Policy*
POA_CORBA::Policy::_this (CORBA_Environment &_env)
{
  STUB_Object *stub = this->_create_stub (_env);
  if (_env.exception () != 0)
    return 0;
  return new POA_CORBA::_tao_collocated_Policy (this, stub);
}
