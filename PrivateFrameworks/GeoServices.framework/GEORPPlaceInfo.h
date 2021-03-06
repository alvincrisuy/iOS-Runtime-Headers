/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPPlaceInfo : PBCodable <NSCopying> {
    GEOPDPlaceRequest * _placeRequest;
    GEOPDPlaceResponse * _placeResponse;
    NSString * _sourceApplication;
    NSString * _sourceUrl;
}

@property (nonatomic, readonly) BOOL hasPlaceRequest;
@property (nonatomic, readonly) BOOL hasPlaceResponse;
@property (nonatomic, readonly) BOOL hasSourceApplication;
@property (nonatomic, readonly) BOOL hasSourceUrl;
@property (nonatomic, retain) GEOPDPlaceRequest *placeRequest;
@property (nonatomic, retain) GEOPDPlaceResponse *placeResponse;
@property (nonatomic, retain) NSString *sourceApplication;
@property (nonatomic, retain) NSString *sourceUrl;

- (void)clearSessionIdFromPlaceRequest;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPlaceRequest;
- (BOOL)hasPlaceResponse;
- (BOOL)hasSourceApplication;
- (BOOL)hasSourceUrl;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeRequest;
- (id)placeResponse;
- (BOOL)readFrom:(id)arg1;
- (void)setPlaceRequest:(id)arg1;
- (void)setPlaceResponse:(id)arg1;
- (void)setSourceApplication:(id)arg1;
- (void)setSourceUrl:(id)arg1;
- (id)sourceApplication;
- (id)sourceUrl;
- (void)writeTo:(id)arg1;

@end
