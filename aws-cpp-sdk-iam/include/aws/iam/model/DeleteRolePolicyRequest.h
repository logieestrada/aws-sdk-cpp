/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /*
  */
  class AWS_IAM_API DeleteRolePolicyRequest : public IAMRequest
  {
  public:
    DeleteRolePolicyRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The name (friendly name, not ARN) identifying the role that the policy is embedded in.</p>
    */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }
    /*
     <p>The name (friendly name, not ARN) identifying the role that the policy is embedded in.</p>
    */
    inline void SetRoleName(const Aws::String& value) { m_roleName = value; }

    /*
     <p>The name (friendly name, not ARN) identifying the role that the policy is embedded in.</p>
    */
    inline void SetRoleName(const char* value) { m_roleName.assign(value); }

    /*
     <p>The name (friendly name, not ARN) identifying the role that the policy is embedded in.</p>
    */
    inline DeleteRolePolicyRequest&  WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /*
     <p>The name (friendly name, not ARN) identifying the role that the policy is embedded in.</p>
    */
    inline DeleteRolePolicyRequest& WithRoleName(const char* value) { SetRoleName(value); return *this;}

    /*
     <p>The name identifying the policy document to delete.</p>
    */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }
    /*
     <p>The name identifying the policy document to delete.</p>
    */
    inline void SetPolicyName(const Aws::String& value) { m_policyName = value; }

    /*
     <p>The name identifying the policy document to delete.</p>
    */
    inline void SetPolicyName(const char* value) { m_policyName.assign(value); }

    /*
     <p>The name identifying the policy document to delete.</p>
    */
    inline DeleteRolePolicyRequest&  WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /*
     <p>The name identifying the policy document to delete.</p>
    */
    inline DeleteRolePolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}

  private:
    Aws::String m_roleName;
    Aws::String m_policyName;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws