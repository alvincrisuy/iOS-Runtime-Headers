/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKOrganizer : EKParticipant  {
}

+ (id)organizerWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3 isCurrentUser:(BOOL)arg4;

- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setCurrentUser:(BOOL)arg1;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3 isCurrentUser:(BOOL)arg4;
- (BOOL)isCurrentUser;
- (id)lazyLoadRelationForKey:(id)arg1;
- (id)owner;

@end