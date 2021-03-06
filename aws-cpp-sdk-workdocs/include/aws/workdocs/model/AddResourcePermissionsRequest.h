﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/WorkDocsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workdocs/model/SharePrincipal.h>
#include <utility>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

  /**
   */
  class AWS_WORKDOCS_API AddResourcePermissionsRequest : public WorkDocsRequest
  {
  public:
    AddResourcePermissionsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Amazon WorkDocs authentication token. This field should not be set when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline const Aws::String& GetAuthenticationToken() const{ return m_authenticationToken; }

    /**
     * <p>Amazon WorkDocs authentication token. This field should not be set when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline void SetAuthenticationToken(const Aws::String& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = value; }

    /**
     * <p>Amazon WorkDocs authentication token. This field should not be set when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline void SetAuthenticationToken(Aws::String&& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = std::move(value); }

    /**
     * <p>Amazon WorkDocs authentication token. This field should not be set when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline void SetAuthenticationToken(const char* value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken.assign(value); }

    /**
     * <p>Amazon WorkDocs authentication token. This field should not be set when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline AddResourcePermissionsRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. This field should not be set when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline AddResourcePermissionsRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. This field should not be set when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline AddResourcePermissionsRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}

    /**
     * <p>The ID of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the resource.</p>
     */
    inline AddResourcePermissionsRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource.</p>
     */
    inline AddResourcePermissionsRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource.</p>
     */
    inline AddResourcePermissionsRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}

    /**
     * <p>The users, groups, or organization being granted permission.</p>
     */
    inline const Aws::Vector<SharePrincipal>& GetPrincipals() const{ return m_principals; }

    /**
     * <p>The users, groups, or organization being granted permission.</p>
     */
    inline void SetPrincipals(const Aws::Vector<SharePrincipal>& value) { m_principalsHasBeenSet = true; m_principals = value; }

    /**
     * <p>The users, groups, or organization being granted permission.</p>
     */
    inline void SetPrincipals(Aws::Vector<SharePrincipal>&& value) { m_principalsHasBeenSet = true; m_principals = std::move(value); }

    /**
     * <p>The users, groups, or organization being granted permission.</p>
     */
    inline AddResourcePermissionsRequest& WithPrincipals(const Aws::Vector<SharePrincipal>& value) { SetPrincipals(value); return *this;}

    /**
     * <p>The users, groups, or organization being granted permission.</p>
     */
    inline AddResourcePermissionsRequest& WithPrincipals(Aws::Vector<SharePrincipal>&& value) { SetPrincipals(std::move(value)); return *this;}

    /**
     * <p>The users, groups, or organization being granted permission.</p>
     */
    inline AddResourcePermissionsRequest& AddPrincipals(const SharePrincipal& value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }

    /**
     * <p>The users, groups, or organization being granted permission.</p>
     */
    inline AddResourcePermissionsRequest& AddPrincipals(SharePrincipal&& value) { m_principalsHasBeenSet = true; m_principals.push_back(std::move(value)); return *this; }

  private:
    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet;
    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;
    Aws::Vector<SharePrincipal> m_principals;
    bool m_principalsHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
