/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemClientAttributes : PBCodable <NSCopying> {
    GEOMapItemAddressBookAttributes * _addressBookAttributes;
    GEOMapItemCorrectedLocationAttributes * _correctedLocationAttributes;
    GEOMapItemRoutineAttributes * _routineAttributes;
}

@property (nonatomic, retain) GEOMapItemAddressBookAttributes *addressBookAttributes;
@property (nonatomic, retain) GEOMapItemCorrectedLocationAttributes *correctedLocationAttributes;
@property (nonatomic, readonly) BOOL hasAddressBookAttributes;
@property (nonatomic, readonly) BOOL hasCorrectedLocationAttributes;
@property (nonatomic, readonly) BOOL hasRoutineAttributes;
@property (nonatomic, retain) GEOMapItemRoutineAttributes *routineAttributes;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (id)addressBookAttributes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correctedLocationAttributes;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAddressBookAttributes;
- (BOOL)hasCorrectedLocationAttributes;
- (BOOL)hasRoutineAttributes;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)routineAttributes;
- (void)setAddressBookAttributes:(id)arg1;
- (void)setCorrectedLocationAttributes:(id)arg1;
- (void)setRoutineAttributes:(id)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine

- (id)initWithLOIType:(int)arg1 event:(id)arg2;

@end
