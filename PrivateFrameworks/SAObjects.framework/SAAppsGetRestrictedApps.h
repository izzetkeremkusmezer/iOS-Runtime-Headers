/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray;

@interface SAAppsGetRestrictedApps : SABaseClientBoundCommand {
}

@property(copy) NSArray * appIds;

+ (id)getRestrictedApps;
+ (id)getRestrictedAppsWithDictionary:(id)arg1 context:(id)arg2;

- (id)appIds;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setAppIds:(id)arg1;

@end
