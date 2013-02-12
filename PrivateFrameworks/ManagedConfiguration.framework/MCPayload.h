/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class MCProfile, NSArray, NSString;

@interface MCPayload : NSObject {
    NSString *_UUID;
    NSString *_displayName;
    NSString *_identifier;
    NSString *_organization;
    NSString *_payloadDescription;
    NSString *_persistentResourceID;
    MCProfile *_profile;
    NSString *_type;
    int _version;
}

@property(readonly) NSString * UUID;
@property(retain) NSString * displayName;
@property(readonly) NSString * friendlyName;
@property(readonly) NSString * identifier;
@property(readonly) NSArray * installationWarnings;
@property(readonly) NSString * organization;
@property(readonly) NSString * payloadDescription;
@property(retain) NSString * persistentResourceID;
@property(readonly) MCProfile * profile;
@property(readonly) NSString * type;
@property(readonly) int version;

+ (id)badFieldTypeErrorWithField:(id)arg1;
+ (id)badFieldValueErrorWithField:(id)arg1;
+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;
+ (id)payloadFromDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
+ (id)payloadsFromArray:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
+ (id)typeStrings;
+ (id)wrapperPayloadDictionary;

- (id)UUID;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)friendlyName;
- (id)identifier;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installationWarnings;
- (id)malformedPayloadErrorWithError:(id)arg1;
- (id)organization;
- (id)payloadDescription;
- (id)persistentResourceID;
- (id)profile;
- (void)setDisplayName:(id)arg1;
- (void)setPersistentResourceID:(id)arg1;
- (void)setPersistentResourceID:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)title;
- (id)type;
- (int)version;

@end