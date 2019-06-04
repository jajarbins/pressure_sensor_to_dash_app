from rest_framework import serializers
from .models import PressureV2


class PressureSerializer(serializers.ModelSerializer):

    class Meta:
        model = PressureV2
        fields = '__all__'


