from django.http import HttpResponse
from rest_framework.views import APIView
from rest_framework.response import Response
from rest_framework import status

from .forms import PressureForm
from .models import PressureV2
from .serializers import PressureSerializer


class PressureList(APIView):

    def get(self, request):
        data = PressureV2.objects.all()
        serializer = PressureSerializer(data, many=True)
        return HttpResponse(serializer.data, status=status.HTTP_200_OK)

    def post(self, request):
        print(request)
        form = PressureForm(request.POST)
        print(f"form: {form}")
        if form.is_valid():
            print(f"valid form")
            form.save()
            print("form saved")
            return Response(form.data, status=status.HTTP_201_CREATED)
        print("bad request")
        return HttpResponse(status=status.HTTP_400_BAD_REQUEST)


