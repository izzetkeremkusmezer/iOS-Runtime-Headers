/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMapTable;



@interface EDKeyedCollection : EDCollection 
{
    NSMapTable *mMap;
}


- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)addObject:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)removeObjectAtIndex:(NSUInteger)arg1;
- (void)removeAllObjects;
- (id)objectWithKey:(NSInteger)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isObjectInMap:(id)arg1;
     /* Encoded args for previous method: B12@0:4@8 */

- (void)insertIntoMap:(id)arg1;
- (void)removeFromMap:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isOverwritingKeyOK;
     /* Encoded args for previous method: B8@0:4 */

- (NSInteger)keyFromObject:(id)arg1;

@end