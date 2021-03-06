/**
 * Original work: Copyright (c) 2014 Sergey Skoblikov
 * Modified work: Copyright (c) 2015-2016 Dmitry Ivanov
 *
 * This file is a part of QEverCloud project and is distributed under the terms of MIT license:
 * https://opensource.org/licenses/MIT
 *
 * This file was generated from Evernote Thrift API
 */


#ifndef QEVERCLOUD_GENERATED_CONSTANTS_H
#define QEVERCLOUD_GENERATED_CONSTANTS_H

#include "../Optional.h"
#include "../export.h"
#include <QMap>
#include <QList>
#include <QSet>
#include <QString>
#include <QStringList>
#include <QByteArray>
#include <QDateTime>
#include <QMetaType>

namespace qevercloud {

// Limits.thrift
/**
 * Minimum length of any string-based attribute, in Unicode chars
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_ATTRIBUTE_LEN_MIN;

/**
 * Maximum length of any string-based attribute, in Unicode chars
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_ATTRIBUTE_LEN_MAX;

/**
 * Any string-based attribute must match the provided regular expression.
 * This excludes all Unicode line endings and control characters.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_ATTRIBUTE_REGEX;

/**
 * The maximum number of values that can be stored in a list-based attribute
 * (e.g. see UserAttributes.recentMailedAddresses)
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_ATTRIBUTE_LIST_MAX;

/**
 * The maximum number of entries that can be stored in a map-based attribute
 * such as applicationData fields in Resources and Notes.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_ATTRIBUTE_MAP_MAX;

/**
 * The minimum length of a GUID generated by the Evernote service
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_GUID_LEN_MIN;

/**
 * The maximum length of a GUID generated by the Evernote service
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_GUID_LEN_MAX;

/**
 * GUIDs generated by the Evernote service will match the provided pattern
 */
QEVERCLOUD_EXPORT extern const QString EDAM_GUID_REGEX;

/**
 * The minimum length of any email address
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_EMAIL_LEN_MIN;

/**
 * The maximum length of any email address
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_EMAIL_LEN_MAX;

/**
 * A regular expression that matches the part of an email address before
 * the '@' symbol.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_EMAIL_LOCAL_REGEX;

/**
 * A regular expression that matches the part of an email address after
 * the '@' symbol.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_EMAIL_DOMAIN_REGEX;

/**
 * A regular expression that must match any email address given to Evernote.
 * Email addresses must comply with RFC 2821 and 2822.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_EMAIL_REGEX;

/**
 * A regular expression that must match any VAT ID given to Evernote.
 * ref http://en.wikipedia.org/wiki/VAT_identification_number
 * ref http://my.safaribooksonline.com/book/programming/regular-expressions/9780596802837/4dot-validation-and-formatting/id2995136
 */
QEVERCLOUD_EXPORT extern const QString EDAM_VAT_REGEX;

/**
 * The minimum length of a timezone specification string
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_TIMEZONE_LEN_MIN;

/**
 * The maximum length of a timezone specification string
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_TIMEZONE_LEN_MAX;

/**
 * Any timezone string given to Evernote must match the provided pattern.
 * This permits either a locale-based standard timezone or a GMT offset.
 * E.g.:<ul>
 *    <li>America/Los_Angeles</li>
 *    <li>GMT+08:00</li>
 * </ul>
 */
QEVERCLOUD_EXPORT extern const QString EDAM_TIMEZONE_REGEX;

/**
 * The minimum length of any MIME type string given to Evernote
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_MIME_LEN_MIN;

/**
 * The maximum length of any MIME type string given to Evernote
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_MIME_LEN_MAX;

/**
 * Any MIME type string given to Evernote must match the provided pattern.
 * E.g.:  image/gif
 */
QEVERCLOUD_EXPORT extern const QString EDAM_MIME_REGEX;

/** Canonical MIME type string for GIF image resources */
QEVERCLOUD_EXPORT extern const QString EDAM_MIME_TYPE_GIF;

/** Canonical MIME type string for JPEG image resources */
QEVERCLOUD_EXPORT extern const QString EDAM_MIME_TYPE_JPEG;

/** Canonical MIME type string for PNG image resources */
QEVERCLOUD_EXPORT extern const QString EDAM_MIME_TYPE_PNG;

/** Canonical MIME type string for WAV audio resources */
QEVERCLOUD_EXPORT extern const QString EDAM_MIME_TYPE_WAV;

/** Canonical MIME type string for MP3 audio resources */
QEVERCLOUD_EXPORT extern const QString EDAM_MIME_TYPE_MP3;

/** Canonical MIME type string for AMR audio resources */
QEVERCLOUD_EXPORT extern const QString EDAM_MIME_TYPE_AMR;

/** Canonical MIME type string for AAC audio resources */
QEVERCLOUD_EXPORT extern const QString EDAM_MIME_TYPE_AAC;

/** Canonical MIME type string for MP4 audio resources */
QEVERCLOUD_EXPORT extern const QString EDAM_MIME_TYPE_M4A;

/** Canonical MIME type string for MP4 video resources */
QEVERCLOUD_EXPORT extern const QString EDAM_MIME_TYPE_MP4_VIDEO;

/** Canonical MIME type string for Evernote Ink resources */
QEVERCLOUD_EXPORT extern const QString EDAM_MIME_TYPE_INK;

/** Canonical MIME type string for PDF resources */
QEVERCLOUD_EXPORT extern const QString EDAM_MIME_TYPE_PDF;

/** MIME type used for attachments of an unspecified type */
QEVERCLOUD_EXPORT extern const QString EDAM_MIME_TYPE_DEFAULT;

/**
 * The set of resource MIME types that are expected to be handled
 * correctly by all of the major Evernote client applications.
 */
QEVERCLOUD_EXPORT extern const QSet< QString > EDAM_MIME_TYPES;

/**
 * The set of MIME types that Evernote will parse and index for
 * searching. With exception of images, and PDFs, which are
 * handled in a different way.
 */
QEVERCLOUD_EXPORT extern const QSet< QString > EDAM_INDEXABLE_RESOURCE_MIME_TYPES;

/**
 * The minimum length of a user search query string in Unicode chars
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_SEARCH_QUERY_LEN_MIN;

/**
 * The maximum length of a user search query string in Unicode chars
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_SEARCH_QUERY_LEN_MAX;

/**
 * Search queries must match the provided pattern.  This is used for
 * both ad-hoc queries and SavedSearch.query fields.
 * This excludes all control characters and line/paragraph separators.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_SEARCH_QUERY_REGEX;

/**
 * The exact length of a MD5 hash checksum, in binary bytes.
 * This is the exact length that must be matched for any binary hash
 * value.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_HASH_LEN;

/**
 * The minimum length of an Evernote username
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_USER_USERNAME_LEN_MIN;

/**
 * The maximum length of an Evernote username
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_USER_USERNAME_LEN_MAX;

/**
 * Any Evernote User.username field must match this pattern.  This
 * restricts usernames to a format that could permit use as a domain
 * name component.  E.g. "username.whatever.evernote.com"
 */
QEVERCLOUD_EXPORT extern const QString EDAM_USER_USERNAME_REGEX;

/**
 * Minimum length of the User.name field
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_USER_NAME_LEN_MIN;

/**
 * Maximum length of the User.name field
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_USER_NAME_LEN_MAX;

/**
 * The User.name field must match this pattern, which excludes line
 * endings and control characters.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_USER_NAME_REGEX;

/**
 * The minimum length of a Tag.name, in Unicode characters
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_TAG_NAME_LEN_MIN;

/**
 * The maximum length of a Tag.name, in Unicode characters
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_TAG_NAME_LEN_MAX;

/**
 * All Tag.name fields must match this pattern.
 * This excludes control chars, commas or line/paragraph separators.
 * The string may not begin or end with whitespace.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_TAG_NAME_REGEX;

/**
 * The minimum length of a Note.title, in Unicode characters
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_NOTE_TITLE_LEN_MIN;

/**
 * The maximum length of a Note.title, in Unicode characters
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_NOTE_TITLE_LEN_MAX;

/**
 * All Note.title fields must match this pattern.
 * This excludes control chars or line/paragraph separators.
 * The string may not begin or end with whitespace.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_NOTE_TITLE_REGEX;

/**
 * Minimum length of a Note.content field.
 * Note.content fields must comply with the ENML DTD.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_NOTE_CONTENT_LEN_MIN;

/**
 * Maximum length of a Note.content field
 * Note.content fields must comply with the ENML DTD.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_NOTE_CONTENT_LEN_MAX;

/**
 * Minimum length of an application name, which is the key in an
 * applicationData LazyMap found in entities such as Resources and
 * Notes.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_APPLICATIONDATA_NAME_LEN_MIN;

/**
 * Maximum length of an application name, which is the key in an
 * applicationData LazyMap found in entities such as Resources and
 * Notes.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_APPLICATIONDATA_NAME_LEN_MAX;

/**
 * Minimum length of an applicationData value in a LazyMap, found
 * in entities such as Resources and Notes.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_APPLICATIONDATA_VALUE_LEN_MIN;

/**
 * Maximum length of an applicationData value in a LazyMap, found
 * in entities such as Resources and Notes.  Note, however, that
 * the sum of the size of hte key and value is constrained by
 * EDAM_APPLICATIONDATA_ENTRY_LEN_MAX, so the maximum length, in
 * practice, depends upon the key value being used.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_APPLICATIONDATA_VALUE_LEN_MAX;

/**
 * The total length of an entry in an applicationData LazyMap, which
 * is the sum of the length of the key and the value for the entry.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_APPLICATIONDATA_ENTRY_LEN_MAX;

/**
 * An application name must match this regex.  An application
 * name is the key portion of an entry in an applicationData
 * map as found in entities such as Resources and Notes.
 * Note that even if both the name and value regexes match,
 * it is still necessary to check the sum of the lengths
 * against EDAM_APPLICATIONDATA_ENTRY_LEN_MAX.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_APPLICATIONDATA_NAME_REGEX;

/**
 * An applicationData map value must match this regex.
 * Note that even if both the name and value regexes match,
 * it is still necessary to check the sum of the lengths
 * against EDAM_APPLICATIONDATA_ENTRY_LEN_MAX.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_APPLICATIONDATA_VALUE_REGEX;

/**
 * The minimum length of a Notebook.name, in Unicode characters
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_NOTEBOOK_NAME_LEN_MIN;

/**
 * The maximum length of a Notebook.name, in Unicode characters
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_NOTEBOOK_NAME_LEN_MAX;

/**
 * All Notebook.name fields must match this pattern.
 * This excludes control chars or line/paragraph separators.
 * The string may not begin or end with whitespace.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_NOTEBOOK_NAME_REGEX;

/**
 * The minimum length of a Notebook.stack, in Unicode characters
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_NOTEBOOK_STACK_LEN_MIN;

/**
 * The maximum length of a Notebook.stack, in Unicode characters
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_NOTEBOOK_STACK_LEN_MAX;

/**
 * All Notebook.stack fields must match this pattern.
 * This excludes control chars or line/paragraph separators.
 * The string may not begin or end with whitespace.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_NOTEBOOK_STACK_REGEX;

/**
 * The minimum length of a public notebook URI component
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_PUBLISHING_URI_LEN_MIN;

/**
 * The maximum length of a public notebook URI component
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_PUBLISHING_URI_LEN_MAX;

/**
 * A public notebook URI component must match the provided pattern
 */
QEVERCLOUD_EXPORT extern const QString EDAM_PUBLISHING_URI_REGEX;

/**
 * The set of strings that may not be used as a publishing URI
 */
QEVERCLOUD_EXPORT extern const QSet< QString > EDAM_PUBLISHING_URI_PROHIBITED;

/**
 * The minimum length of a Publishing.publicDescription field.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_PUBLISHING_DESCRIPTION_LEN_MIN;

/**
 * The maximum length of a Publishing.publicDescription field.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_PUBLISHING_DESCRIPTION_LEN_MAX;

/**
 * Any public notebook's Publishing.publicDescription field must match
 * this pattern.
 * No control chars or line/paragraph separators, and can't start or
 * end with whitespace.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_PUBLISHING_DESCRIPTION_REGEX;

/**
 * The minimum length of a SavedSearch.name field
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_SAVED_SEARCH_NAME_LEN_MIN;

/**
 * The maximum length of a SavedSearch.name field
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_SAVED_SEARCH_NAME_LEN_MAX;

/**
 * SavedSearch.name fields must match this pattern.
 * No control chars or line/paragraph separators, and can't start or
 * end with whitespace.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_SAVED_SEARCH_NAME_REGEX;

/**
 * The minimum length of an Evernote user password
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_USER_PASSWORD_LEN_MIN;

/**
 * The maximum length of an Evernote user password
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_USER_PASSWORD_LEN_MAX;

/**
 * Evernote user passwords must match this regular expression
 */
QEVERCLOUD_EXPORT extern const QString EDAM_USER_PASSWORD_REGEX;

/**
 * The maximum length of an Evernote Business URI
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_BUSINESS_URI_LEN_MAX;

/**
 * The maximum number of Tags per Note
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_NOTE_TAGS_MAX;

/**
 * The maximum number of Resources per Note
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_NOTE_RESOURCES_MAX;

/**
 * Maximum number of Tags per account
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_USER_TAGS_MAX;

/**
 * Maximum number of Tags per business account.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_BUSINESS_TAGS_MAX;

/**
 * Maximum number of SavedSearches per account
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_USER_SAVED_SEARCHES_MAX;

/**
 * Maximum number of Notes per user
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_USER_NOTES_MAX;

/**
 * Maximum number of Notes per business account
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_BUSINESS_NOTES_MAX;

/**
 * Maximum number of Notebooks per user
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_USER_NOTEBOOKS_MAX;

/**
 * Maximum number of Notebooks in a business account
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_BUSINESS_NOTEBOOKS_MAX;

/**
 * Maximum number of recent email addresses that are maintained
 * (see UserAttributes.recentMailedAddresses)
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_USER_RECENT_MAILED_ADDRESSES_MAX;

/**
 * The number of emails of any type that can be sent by a user with a Free
 * account from the service per day.  If an email is sent to two different
 * recipients, this counts as two emails.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_USER_MAIL_LIMIT_DAILY_FREE;

/**
 * The number of emails of any type that can be sent by a user with a Premium
 * account from the service per day.  If an email is sent to two different
 * recipients, this counts as two emails.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_USER_MAIL_LIMIT_DAILY_PREMIUM;

/**
 * The number of bytes of new data that may be uploaded to a Free user's
 * account each month.
 */
QEVERCLOUD_EXPORT extern const qint64 EDAM_USER_UPLOAD_LIMIT_FREE;

/**
 * The number of bytes of new data that may be uploaded to a Premium user's
 * account each month.
 */
QEVERCLOUD_EXPORT extern const qint64 EDAM_USER_UPLOAD_LIMIT_PREMIUM;

/**
 * The number of bytes of new data that may be uploaded to a Business user's
 * personal account each month. Note that content uploaded into the Business
 * notebooks by the user does not count against this limit.
 */
QEVERCLOUD_EXPORT extern const qint64 EDAM_USER_UPLOAD_LIMIT_BUSINESS;

/**
 * Maximum total size of a Note that can be added to a Free account.
 * The size of a note is calculated as:
 * ENML content length (in Unicode characters) plus the sum of all resource
 * sizes (in bytes).
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_NOTE_SIZE_MAX_FREE;

/**
 * Maximum total size of a Note that can be added to a Premium account.
 * The size of a note is calculated as:
 * ENML content length (in Unicode characters) plus the sum of all resource
 * sizes (in bytes).
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_NOTE_SIZE_MAX_PREMIUM;

/**
 * Maximum size of a resource, in bytes, for Free accounts
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_RESOURCE_SIZE_MAX_FREE;

/**
 * Maximum size of a resource, in bytes, for Premium accounts
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_RESOURCE_SIZE_MAX_PREMIUM;

/**
 * Maximum number of linked notebooks per account, for a free
 * account.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_USER_LINKED_NOTEBOOK_MAX;

/**
 * Maximum number of linked notebooks per account, for a premium
 * account.  Users who are part of an active business are also
 * covered under "premium".
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_USER_LINKED_NOTEBOOK_MAX_PREMIUM;

/**
 * Maximum number of shared notebooks per notebook
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_NOTEBOOK_SHARED_NOTEBOOK_MAX;

/**
 * The minimum length of the content class attribute of a note.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_NOTE_CONTENT_CLASS_LEN_MIN;

/**
 * The maximum length of the content class attribute of a note.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_NOTE_CONTENT_CLASS_LEN_MAX;

/**
 * The regular expression that the content class of a note must match
 * to be valid.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_NOTE_CONTENT_CLASS_REGEX;

/**
 * The content class prefix used for all notes created by Evernote Hello.
 * This prefix can be used to assemble individual content class strings,
 * or can be used to create a wildcard search to get all notes created by
 * Hello. When performing a wildcard search via filtered sync chunks or
 * search strings, the * character must be appended to this constant.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_HELLO_APP_CONTENT_CLASS_PREFIX;

/**
 * The content class prefix used for all notes created by Evernote Food.
 * This prefix can be used to assemble individual content class strings,
 * or can be used to create a wildcard search to get all notes created by
 * Food. When performing a wildcard search via filtered sync chunks or
 * search strings, the * character must be appended to this constant.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_FOOD_APP_CONTENT_CLASS_PREFIX;

/**
 * The content class prefix used for structured notes created by Evernote
 * Hello that represents an encounter with a person. When performing a
 * wildcard search via filtered sync chunks or search strings, the *
 * character must be appended to this constant.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_CONTENT_CLASS_HELLO_ENCOUNTER;

/**
 * The content class prefix used for structured notes created by Evernote
 * Hello that represents the user's profile. When performing a
 * wildcard search via filtered sync chunks or search strings, the *
 * character must be appended to this constant.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_CONTENT_CLASS_HELLO_PROFILE;

/**
 * The content class prefix used for structured notes created by
 * Evernote Food that captures the experience of a particular meal.
 * When performing a wildcard search via filtered sync chunks or search
 * strings, the * character must be appended to this constant.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_CONTENT_CLASS_FOOD_MEAL;

/**
 * The content class prefix used for structured notes created by Evernote
 * Skitch. When performing a wildcard search via filtered sync chunks
 * or search strings, the * character must be appended to this constant.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_CONTENT_CLASS_SKITCH_PREFIX;

/**
 * The content class value used for structured image notes created by Evernote
 * Skitch.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_CONTENT_CLASS_SKITCH;

/**
 * The content class value used for structured PDF notes created by Evernote
 * Skitch.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_CONTENT_CLASS_SKITCH_PDF;

/**
 * The content class prefix used for structured notes created by Evernote
 * Penultimate. When performing a wildcard search via filtered sync chunks
 * or search strings, the * character must be appended to this constant.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_CONTENT_CLASS_PENULTIMATE_PREFIX;

/**
 * The content class value used for structured notes created by Evernote
 * Penultimate that represents a Penultimate notebook.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_CONTENT_CLASS_PENULTIMATE_NOTEBOOK;

/**
 * The minimum length of the plain text in a findRelated query, assuming that
 * plaintext is being provided.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_RELATED_PLAINTEXT_LEN_MIN;

/**
 * The maximum length of the plain text in a findRelated query, assuming that
 * plaintext is being provided.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_RELATED_PLAINTEXT_LEN_MAX;

/**
 * The maximum number of notes that will be returned from a findRelated()
 * query.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_RELATED_MAX_NOTES;

/**
 * The maximum number of notebooks that will be returned from a findRelated()
 * query.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_RELATED_MAX_NOTEBOOKS;

/**
 * The maximum number of tags that will be returned from a findRelated() query.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_RELATED_MAX_TAGS;

/**
 * The minimum length, in Unicode characters, of a description for a business
 * notebook.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_BUSINESS_NOTEBOOK_DESCRIPTION_LEN_MIN;

/**
 * The maximum length, in Unicode characters, of a description for a business
 * notebook.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_BUSINESS_NOTEBOOK_DESCRIPTION_LEN_MAX;

/**
 * All business notebook descriptions must match this pattern.
 * This excludes control chars or line/paragraph separators.
 * The string may not begin or end with whitespace.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_BUSINESS_NOTEBOOK_DESCRIPTION_REGEX;

/**
 * The maximum length of a business phone number.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_BUSINESS_PHONE_NUMBER_LEN_MAX;

/**
 * Minimum length of a preference name
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_PREFERENCE_NAME_LEN_MIN;

/**
 * Maximum length of a preference name
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_PREFERENCE_NAME_LEN_MAX;

/**
 * Minimum length of a preference value
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_PREFERENCE_VALUE_LEN_MIN;

/**
 * Maximum length of a preference value
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_PREFERENCE_VALUE_LEN_MAX;

/**
 * Maximum number of name/value pairs allowed
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_MAX_PREFERENCES;

/**
 * Maximum number of values per preference name
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_MAX_VALUES_PER_PREFERENCE;

/**
 * A preference name must match this regex.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_PREFERENCE_NAME_REGEX;

/**
 * A preference value must match this regex.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_PREFERENCE_VALUE_REGEX;

/**
 * The name of the preferences entry that contains shortcuts.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_PREFERENCE_SHORTCUTS;

/**
 * The maximum number of shortcuts that a user may have.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_PREFERENCE_SHORTCUTS_MAX_VALUES;

/**
 * Maximum length of the device identifier string associated with long sessions.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_DEVICE_ID_LEN_MAX;

/**
 * Regular expression for device identifier strings associated with long sessions.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_DEVICE_ID_REGEX;

/**
 * Maximum length of the device description string associated with long sessions.
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_DEVICE_DESCRIPTION_LEN_MAX;

/**
 * Regular expression for device description strings associated with long sessions.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_DEVICE_DESCRIPTION_REGEX;

/**
 * Maximum number of search suggestions that can be returned
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_SEARCH_SUGGESTIONS_MAX;

/**
 * Maximum length of the search suggestion prefix
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_SEARCH_SUGGESTIONS_PREFIX_LEN_MAX;

/**
 * Minimum length of the search suggestion prefix
 */
QEVERCLOUD_EXPORT extern const qint32 EDAM_SEARCH_SUGGESTIONS_PREFIX_LEN_MIN;


// Types.thrift
/**
 * A value for the "recipe" key in the "classifications" map in NoteAttributes
 * that indicates the user has classified a note as being a non-recipe.
 */
QEVERCLOUD_EXPORT extern const QString CLASSIFICATION_RECIPE_USER_NON_RECIPE;

/**
 * A value for the "recipe" key in the "classifications" map in NoteAttributes
 * that indicates the user has classified a note as being a recipe.
 */
QEVERCLOUD_EXPORT extern const QString CLASSIFICATION_RECIPE_USER_RECIPE;

/**
 * A value for the "recipe" key in the "classifications" map in NoteAttributes
 * that indicates the Evernote service has classified a note as being a recipe.
 */
QEVERCLOUD_EXPORT extern const QString CLASSIFICATION_RECIPE_SERVICE_RECIPE;

/**
 * Standardized value for the 'source' NoteAttribute for notes that
 * were clipped from the web in some manner.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_NOTE_SOURCE_WEB_CLIP;

/**
 * Standardized value for the 'source' NoteAttribute for notes that
 * were clipped from an email message.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_NOTE_SOURCE_MAIL_CLIP;

/**
 * Standardized value for the 'source' NoteAttribute for notes that
 * were created via email sent to Evernote's email interface.
 */
QEVERCLOUD_EXPORT extern const QString EDAM_NOTE_SOURCE_MAIL_SMTP_GATEWAY;


// UserStore.thrift
/**
 * The major version number for the current revision of the EDAM protocol.
 * Clients pass this to the service using UserStore.checkVersion at the
 * beginning of a session to confirm that they are not out of date.
 */
QEVERCLOUD_EXPORT extern const qint16 EDAM_VERSION_MAJOR;

/**
 * The minor version number for the current revision of the EDAM protocol.
 * Clients pass this to the service using UserStore.checkVersion at the
 * beginning of a session to confirm that they are not out of date.
 */
QEVERCLOUD_EXPORT extern const qint16 EDAM_VERSION_MINOR;

} // namespace qevercloud

#endif // QEVERCLOUD_GENERATED_CONSTANTS_H
