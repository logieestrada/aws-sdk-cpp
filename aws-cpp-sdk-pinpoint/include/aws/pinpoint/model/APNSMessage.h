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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/Action.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * APNS Message.
   */
  class AWS_PINPOINT_API APNSMessage
  {
  public:
    APNSMessage();
    APNSMessage(const Aws::Utils::Json::JsonValue& jsonValue);
    APNSMessage& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * The action that occurs if the user taps a push notification delivered by the
     * campaign: OPEN_APP - Your app launches, or it becomes the foreground app if it
     * has been sent to the background. This is the default action. DEEP_LINK - Uses
     * deep linking features in iOS and Android to open your app and display a
     * designated user interface within the app. URL - The default mobile browser on
     * the user's device launches and opens a web page at the URL you specify. Possible
     * values include: OPEN_APP | DEEP_LINK | URL
     */
    inline const Action& GetAction() const{ return m_action; }

    /**
     * The action that occurs if the user taps a push notification delivered by the
     * campaign: OPEN_APP - Your app launches, or it becomes the foreground app if it
     * has been sent to the background. This is the default action. DEEP_LINK - Uses
     * deep linking features in iOS and Android to open your app and display a
     * designated user interface within the app. URL - The default mobile browser on
     * the user's device launches and opens a web page at the URL you specify. Possible
     * values include: OPEN_APP | DEEP_LINK | URL
     */
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * The action that occurs if the user taps a push notification delivered by the
     * campaign: OPEN_APP - Your app launches, or it becomes the foreground app if it
     * has been sent to the background. This is the default action. DEEP_LINK - Uses
     * deep linking features in iOS and Android to open your app and display a
     * designated user interface within the app. URL - The default mobile browser on
     * the user's device launches and opens a web page at the URL you specify. Possible
     * values include: OPEN_APP | DEEP_LINK | URL
     */
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * The action that occurs if the user taps a push notification delivered by the
     * campaign: OPEN_APP - Your app launches, or it becomes the foreground app if it
     * has been sent to the background. This is the default action. DEEP_LINK - Uses
     * deep linking features in iOS and Android to open your app and display a
     * designated user interface within the app. URL - The default mobile browser on
     * the user's device launches and opens a web page at the URL you specify. Possible
     * values include: OPEN_APP | DEEP_LINK | URL
     */
    inline APNSMessage& WithAction(const Action& value) { SetAction(value); return *this;}

    /**
     * The action that occurs if the user taps a push notification delivered by the
     * campaign: OPEN_APP - Your app launches, or it becomes the foreground app if it
     * has been sent to the background. This is the default action. DEEP_LINK - Uses
     * deep linking features in iOS and Android to open your app and display a
     * designated user interface within the app. URL - The default mobile browser on
     * the user's device launches and opens a web page at the URL you specify. Possible
     * values include: OPEN_APP | DEEP_LINK | URL
     */
    inline APNSMessage& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}

    /**
     * Include this key when you want the system to modify the badge of your app icon.
     * If this key is not included in the dictionary, the badge is not changed. To
     * remove the badge, set the value of this key to 0.
     */
    inline int GetBadge() const{ return m_badge; }

    /**
     * Include this key when you want the system to modify the badge of your app icon.
     * If this key is not included in the dictionary, the badge is not changed. To
     * remove the badge, set the value of this key to 0.
     */
    inline void SetBadge(int value) { m_badgeHasBeenSet = true; m_badge = value; }

    /**
     * Include this key when you want the system to modify the badge of your app icon.
     * If this key is not included in the dictionary, the badge is not changed. To
     * remove the badge, set the value of this key to 0.
     */
    inline APNSMessage& WithBadge(int value) { SetBadge(value); return *this;}

    /**
     * The message body of the notification, the email body or the text message.
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * The message body of the notification, the email body or the text message.
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * The message body of the notification, the email body or the text message.
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * The message body of the notification, the email body or the text message.
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * The message body of the notification, the email body or the text message.
     */
    inline APNSMessage& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * The message body of the notification, the email body or the text message.
     */
    inline APNSMessage& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * The message body of the notification, the email body or the text message.
     */
    inline APNSMessage& WithBody(const char* value) { SetBody(value); return *this;}

    /**
     * Provide this key with a string value that represents the notification's type.
     * This value corresponds to the value in the identifier property of one of your
     * app's registered categories.
     */
    inline const Aws::String& GetCategory() const{ return m_category; }

    /**
     * Provide this key with a string value that represents the notification's type.
     * This value corresponds to the value in the identifier property of one of your
     * app's registered categories.
     */
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * Provide this key with a string value that represents the notification's type.
     * This value corresponds to the value in the identifier property of one of your
     * app's registered categories.
     */
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * Provide this key with a string value that represents the notification's type.
     * This value corresponds to the value in the identifier property of one of your
     * app's registered categories.
     */
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }

    /**
     * Provide this key with a string value that represents the notification's type.
     * This value corresponds to the value in the identifier property of one of your
     * app's registered categories.
     */
    inline APNSMessage& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}

    /**
     * Provide this key with a string value that represents the notification's type.
     * This value corresponds to the value in the identifier property of one of your
     * app's registered categories.
     */
    inline APNSMessage& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * Provide this key with a string value that represents the notification's type.
     * This value corresponds to the value in the identifier property of one of your
     * app's registered categories.
     */
    inline APNSMessage& WithCategory(const char* value) { SetCategory(value); return *this;}

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetData() const{ return m_data; }

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline void SetData(const Aws::Map<Aws::String, Aws::String>& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline void SetData(Aws::Map<Aws::String, Aws::String>&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline APNSMessage& WithData(const Aws::Map<Aws::String, Aws::String>& value) { SetData(value); return *this;}

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline APNSMessage& WithData(Aws::Map<Aws::String, Aws::String>&& value) { SetData(std::move(value)); return *this;}

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline APNSMessage& AddData(const Aws::String& key, const Aws::String& value) { m_dataHasBeenSet = true; m_data.emplace(key, value); return *this; }

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline APNSMessage& AddData(Aws::String&& key, const Aws::String& value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), value); return *this; }

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline APNSMessage& AddData(const Aws::String& key, Aws::String&& value) { m_dataHasBeenSet = true; m_data.emplace(key, std::move(value)); return *this; }

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline APNSMessage& AddData(Aws::String&& key, Aws::String&& value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline APNSMessage& AddData(const char* key, Aws::String&& value) { m_dataHasBeenSet = true; m_data.emplace(key, std::move(value)); return *this; }

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline APNSMessage& AddData(Aws::String&& key, const char* value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), value); return *this; }

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline APNSMessage& AddData(const char* key, const char* value) { m_dataHasBeenSet = true; m_data.emplace(key, value); return *this; }

    /**
     * The URL that points to a video used in the push notification.
     */
    inline const Aws::String& GetMediaUrl() const{ return m_mediaUrl; }

    /**
     * The URL that points to a video used in the push notification.
     */
    inline void SetMediaUrl(const Aws::String& value) { m_mediaUrlHasBeenSet = true; m_mediaUrl = value; }

    /**
     * The URL that points to a video used in the push notification.
     */
    inline void SetMediaUrl(Aws::String&& value) { m_mediaUrlHasBeenSet = true; m_mediaUrl = std::move(value); }

    /**
     * The URL that points to a video used in the push notification.
     */
    inline void SetMediaUrl(const char* value) { m_mediaUrlHasBeenSet = true; m_mediaUrl.assign(value); }

    /**
     * The URL that points to a video used in the push notification.
     */
    inline APNSMessage& WithMediaUrl(const Aws::String& value) { SetMediaUrl(value); return *this;}

    /**
     * The URL that points to a video used in the push notification.
     */
    inline APNSMessage& WithMediaUrl(Aws::String&& value) { SetMediaUrl(std::move(value)); return *this;}

    /**
     * The URL that points to a video used in the push notification.
     */
    inline APNSMessage& WithMediaUrl(const char* value) { SetMediaUrl(value); return *this;}

    /**
     * The Raw JSON formatted string to be used as the payload. This value overrides
     * the message.
     */
    inline const Aws::String& GetRawContent() const{ return m_rawContent; }

    /**
     * The Raw JSON formatted string to be used as the payload. This value overrides
     * the message.
     */
    inline void SetRawContent(const Aws::String& value) { m_rawContentHasBeenSet = true; m_rawContent = value; }

    /**
     * The Raw JSON formatted string to be used as the payload. This value overrides
     * the message.
     */
    inline void SetRawContent(Aws::String&& value) { m_rawContentHasBeenSet = true; m_rawContent = std::move(value); }

    /**
     * The Raw JSON formatted string to be used as the payload. This value overrides
     * the message.
     */
    inline void SetRawContent(const char* value) { m_rawContentHasBeenSet = true; m_rawContent.assign(value); }

    /**
     * The Raw JSON formatted string to be used as the payload. This value overrides
     * the message.
     */
    inline APNSMessage& WithRawContent(const Aws::String& value) { SetRawContent(value); return *this;}

    /**
     * The Raw JSON formatted string to be used as the payload. This value overrides
     * the message.
     */
    inline APNSMessage& WithRawContent(Aws::String&& value) { SetRawContent(std::move(value)); return *this;}

    /**
     * The Raw JSON formatted string to be used as the payload. This value overrides
     * the message.
     */
    inline APNSMessage& WithRawContent(const char* value) { SetRawContent(value); return *this;}

    /**
     * Indicates if the message should display on the users device. Silent pushes can
     * be used for Remote Configuration and Phone Home use cases.
     */
    inline bool GetSilentPush() const{ return m_silentPush; }

    /**
     * Indicates if the message should display on the users device. Silent pushes can
     * be used for Remote Configuration and Phone Home use cases.
     */
    inline void SetSilentPush(bool value) { m_silentPushHasBeenSet = true; m_silentPush = value; }

    /**
     * Indicates if the message should display on the users device. Silent pushes can
     * be used for Remote Configuration and Phone Home use cases.
     */
    inline APNSMessage& WithSilentPush(bool value) { SetSilentPush(value); return *this;}

    /**
     * Include this key when you want the system to play a sound. The value of this key
     * is the name of a sound file in your app's main bundle or in the Library/Sounds
     * folder of your app's data container. If the sound file cannot be found, or if
     * you specify defaultfor the value, the system plays the default alert sound.
     */
    inline const Aws::String& GetSound() const{ return m_sound; }

    /**
     * Include this key when you want the system to play a sound. The value of this key
     * is the name of a sound file in your app's main bundle or in the Library/Sounds
     * folder of your app's data container. If the sound file cannot be found, or if
     * you specify defaultfor the value, the system plays the default alert sound.
     */
    inline void SetSound(const Aws::String& value) { m_soundHasBeenSet = true; m_sound = value; }

    /**
     * Include this key when you want the system to play a sound. The value of this key
     * is the name of a sound file in your app's main bundle or in the Library/Sounds
     * folder of your app's data container. If the sound file cannot be found, or if
     * you specify defaultfor the value, the system plays the default alert sound.
     */
    inline void SetSound(Aws::String&& value) { m_soundHasBeenSet = true; m_sound = std::move(value); }

    /**
     * Include this key when you want the system to play a sound. The value of this key
     * is the name of a sound file in your app's main bundle or in the Library/Sounds
     * folder of your app's data container. If the sound file cannot be found, or if
     * you specify defaultfor the value, the system plays the default alert sound.
     */
    inline void SetSound(const char* value) { m_soundHasBeenSet = true; m_sound.assign(value); }

    /**
     * Include this key when you want the system to play a sound. The value of this key
     * is the name of a sound file in your app's main bundle or in the Library/Sounds
     * folder of your app's data container. If the sound file cannot be found, or if
     * you specify defaultfor the value, the system plays the default alert sound.
     */
    inline APNSMessage& WithSound(const Aws::String& value) { SetSound(value); return *this;}

    /**
     * Include this key when you want the system to play a sound. The value of this key
     * is the name of a sound file in your app's main bundle or in the Library/Sounds
     * folder of your app's data container. If the sound file cannot be found, or if
     * you specify defaultfor the value, the system plays the default alert sound.
     */
    inline APNSMessage& WithSound(Aws::String&& value) { SetSound(std::move(value)); return *this;}

    /**
     * Include this key when you want the system to play a sound. The value of this key
     * is the name of a sound file in your app's main bundle or in the Library/Sounds
     * folder of your app's data container. If the sound file cannot be found, or if
     * you specify defaultfor the value, the system plays the default alert sound.
     */
    inline APNSMessage& WithSound(const char* value) { SetSound(value); return *this;}

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSubstitutions() const{ return m_substitutions; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline void SetSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_substitutionsHasBeenSet = true; m_substitutions = value; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline void SetSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_substitutionsHasBeenSet = true; m_substitutions = std::move(value); }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline APNSMessage& WithSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetSubstitutions(value); return *this;}

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline APNSMessage& WithSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetSubstitutions(std::move(value)); return *this;}

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline APNSMessage& AddSubstitutions(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline APNSMessage& AddSubstitutions(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), value); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline APNSMessage& AddSubstitutions(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline APNSMessage& AddSubstitutions(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline APNSMessage& AddSubstitutions(const char* key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline APNSMessage& AddSubstitutions(const char* key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }

    /**
     * Provide this key with a string value that represents the app-specific identifier
     * for grouping notifications. If you provide a Notification Content app extension,
     * you can use this value to group your notifications together.
     */
    inline const Aws::String& GetThreadId() const{ return m_threadId; }

    /**
     * Provide this key with a string value that represents the app-specific identifier
     * for grouping notifications. If you provide a Notification Content app extension,
     * you can use this value to group your notifications together.
     */
    inline void SetThreadId(const Aws::String& value) { m_threadIdHasBeenSet = true; m_threadId = value; }

    /**
     * Provide this key with a string value that represents the app-specific identifier
     * for grouping notifications. If you provide a Notification Content app extension,
     * you can use this value to group your notifications together.
     */
    inline void SetThreadId(Aws::String&& value) { m_threadIdHasBeenSet = true; m_threadId = std::move(value); }

    /**
     * Provide this key with a string value that represents the app-specific identifier
     * for grouping notifications. If you provide a Notification Content app extension,
     * you can use this value to group your notifications together.
     */
    inline void SetThreadId(const char* value) { m_threadIdHasBeenSet = true; m_threadId.assign(value); }

    /**
     * Provide this key with a string value that represents the app-specific identifier
     * for grouping notifications. If you provide a Notification Content app extension,
     * you can use this value to group your notifications together.
     */
    inline APNSMessage& WithThreadId(const Aws::String& value) { SetThreadId(value); return *this;}

    /**
     * Provide this key with a string value that represents the app-specific identifier
     * for grouping notifications. If you provide a Notification Content app extension,
     * you can use this value to group your notifications together.
     */
    inline APNSMessage& WithThreadId(Aws::String&& value) { SetThreadId(std::move(value)); return *this;}

    /**
     * Provide this key with a string value that represents the app-specific identifier
     * for grouping notifications. If you provide a Notification Content app extension,
     * you can use this value to group your notifications together.
     */
    inline APNSMessage& WithThreadId(const char* value) { SetThreadId(value); return *this;}

    /**
     * The message title that displays above the message on the user's device.
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * The message title that displays above the message on the user's device.
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * The message title that displays above the message on the user's device.
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * The message title that displays above the message on the user's device.
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * The message title that displays above the message on the user's device.
     */
    inline APNSMessage& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * The message title that displays above the message on the user's device.
     */
    inline APNSMessage& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * The message title that displays above the message on the user's device.
     */
    inline APNSMessage& WithTitle(const char* value) { SetTitle(value); return *this;}

    /**
     * The URL to open in the user's mobile browser. Used if the value for Action is
     * URL.
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * The URL to open in the user's mobile browser. Used if the value for Action is
     * URL.
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * The URL to open in the user's mobile browser. Used if the value for Action is
     * URL.
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * The URL to open in the user's mobile browser. Used if the value for Action is
     * URL.
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * The URL to open in the user's mobile browser. Used if the value for Action is
     * URL.
     */
    inline APNSMessage& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * The URL to open in the user's mobile browser. Used if the value for Action is
     * URL.
     */
    inline APNSMessage& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * The URL to open in the user's mobile browser. Used if the value for Action is
     * URL.
     */
    inline APNSMessage& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:
    Action m_action;
    bool m_actionHasBeenSet;
    int m_badge;
    bool m_badgeHasBeenSet;
    Aws::String m_body;
    bool m_bodyHasBeenSet;
    Aws::String m_category;
    bool m_categoryHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_data;
    bool m_dataHasBeenSet;
    Aws::String m_mediaUrl;
    bool m_mediaUrlHasBeenSet;
    Aws::String m_rawContent;
    bool m_rawContentHasBeenSet;
    bool m_silentPush;
    bool m_silentPushHasBeenSet;
    Aws::String m_sound;
    bool m_soundHasBeenSet;
    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_substitutions;
    bool m_substitutionsHasBeenSet;
    Aws::String m_threadId;
    bool m_threadIdHasBeenSet;
    Aws::String m_title;
    bool m_titleHasBeenSet;
    Aws::String m_url;
    bool m_urlHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
