//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKJSDataSource;
@protocol IKJSDataSourceViewDelegate;

@interface IKJSDataSourceView : NSObject
{
    struct {
        BOOL hasDidReset;
    } _delegateFlags;
    IKJSDataSource *_dataSource;
    id <IKJSDataSourceViewDelegate> _delegate;
    NSRange _usedIndexRange;
}

@property(nonatomic) NSRange usedIndexRange; // @synthesize usedIndexRange=_usedIndexRange;
@property(nonatomic) __weak id <IKJSDataSourceViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak IKJSDataSource *dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (id)initForDataSource:(id)arg1;

@end

