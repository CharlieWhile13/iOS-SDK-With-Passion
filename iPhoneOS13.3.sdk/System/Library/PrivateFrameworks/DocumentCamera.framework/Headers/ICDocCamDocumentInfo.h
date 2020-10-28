//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class ICDocCamImageQuad, NSData, NSDictionary, NSString;
@protocol DCScanDataDelegate, ICDocCamViewControllerDelegate;

@interface ICDocCamDocumentInfo : NSObject <NSSecureCoding>
{
    short _currentFilter;
    NSDictionary *_metaData;
    ICDocCamImageQuad *_imageQuad;
    NSString *_croppedAndFilteredImageUUID;
    NSString *_croppedButNotFilteredImageUUID;
    NSString *_fullImageUUID;
    NSString *_meshAnimImageUUID;
    long long _currentOrientation;
    NSString *_scanDataDelegateIdentifier;
    NSData *_markupModelData;
    id <ICDocCamViewControllerDelegate> _delegate;
}

+ (BOOL)supportsSecureCoding;
@property __weak id <ICDocCamViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSData *markupModelData; // @synthesize markupModelData=_markupModelData;
@property(retain, nonatomic) NSString *scanDataDelegateIdentifier; // @synthesize scanDataDelegateIdentifier=_scanDataDelegateIdentifier;
@property(nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(nonatomic) short currentFilter; // @synthesize currentFilter=_currentFilter;
@property(retain, nonatomic) NSString *meshAnimImageUUID; // @synthesize meshAnimImageUUID=_meshAnimImageUUID;
@property(retain, nonatomic) NSString *fullImageUUID; // @synthesize fullImageUUID=_fullImageUUID;
@property(retain, nonatomic) NSString *croppedButNotFilteredImageUUID; // @synthesize croppedButNotFilteredImageUUID=_croppedButNotFilteredImageUUID;
@property(retain, nonatomic) NSString *croppedAndFilteredImageUUID; // @synthesize croppedAndFilteredImageUUID=_croppedAndFilteredImageUUID;
@property(retain, nonatomic) ICDocCamImageQuad *imageQuad; // @synthesize imageQuad=_imageQuad;
@property(retain, nonatomic) NSDictionary *metaData; // @synthesize metaData=_metaData;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)allUUIDs;
@property(readonly, nonatomic) id <DCScanDataDelegate> scanDataDelegate;
@property(readonly, nonatomic) BOOL hasFilter;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

